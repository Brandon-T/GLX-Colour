#include "Hooks.hpp"

/** @file Hooks.hpp */

std::unique_ptr<SharedMemory> SharedImageData;
std::unique_ptr<SharedMemory> SharedDebugData;
const char* SharedImageName = "Local\\GLHookImage";
const char* SharedDebugName = "Local\\GLHookDebug";

/** @brief Retrieves the current Process's Identifier.
 *
 * @return The current Process-ID prepended with an underscore. Ex: _1024
 *
 */
std::string GetProcessID()
{
    return "_" + std::to_string(getpid());
}

void GetDesktopResolution(int &width, int &height)
{
    #if defined _WIN32 || defined _WIN64
    RECT desktop = {0};
    const HWND hDesktop = GetDesktopWindow();
    GetWindowRect(hDesktop, &desktop);
    width = desktop.right;
    height = desktop.bottom;
    #endif
}

bool InitializeAll()
{
    return ((CreateSharedMemory() || OpenSharedMemory()) && Initialize());
}

bool CreateSharedMemory()
{
    int Width = 0, Height = 0;
    GetDesktopResolution(Width, Height);
    SharedImageData.reset(new SharedMemory(SharedImageName + GetProcessID()));
    SharedDebugData.reset(new SharedMemory(SharedImageName + GetProcessID()));
    std::uint32_t Size = Width || Height == 0 ? SharedImageSize : Width * Height * 4;
    return SharedImageData->MapMemory(Size) && SharedDebugData->MapMemory(Size);
}

bool OpenSharedMemory()
{
    int Width = 0, Height = 0;
    GetDesktopResolution(Width, Height);
    SharedImageData.reset(new SharedMemory(SharedImageName + GetProcessID()));
    SharedDebugData.reset(new SharedMemory(SharedImageName + GetProcessID()));
    std::uint32_t Size = Width || Height == 0 ? SharedImageSize : Width * Height * 4;
    return SharedImageData->OpenMemoryMap(Size) && SharedDebugData->OpenMemoryMap(Size);
}

bool UnMapSharedMemory()
{
    SharedImageData.reset(nullptr);
    SharedDebugData.reset(nullptr);
    return true;
}

/** @brief Flips a given buffer/image and stores it in the specified output buffer.
 *
 * @param[in] In            Specifies the input buffer which holds the image pixels.
 * @param[out] Out          Specifies the output buffer in which the flipped image pixels will be stored. Input & Output must not point to the same memory location!
 * @param[in] width         Width of the image to flip.
 * @param[in] height        Height of the image to flip.
 * @param[in] Bpp           Bits-Per-Pixel of the specified Image. Can: be 24/32.
 *
 */
void FlipImageBytes(void* In, void* &Out, int width, int height, uint32_t Bpp = 32)
{
   unsigned long Chunk = (Bpp > 24 ? width * 4 : width * 3 + width % 4);
   unsigned char* Destination = static_cast<unsigned char*>(Out);
   unsigned char* Source = static_cast<unsigned char*>(In) + Chunk * (height - 1);

   while(Source != In)
   {
      std::memcpy(Destination, Source, Chunk);
      Destination += Chunk;
      Source -= Chunk;
   }
}

/** @brief Enables 2-D drawing onto the screen.
 *
 * @param[out] DrawingEnabled            A boolean in which the result of this function will be stored.
 * @param[out] GLTexture2D               A boolean that will hold whether or not GL_TEXTURE_2D is enabled.
 * @param[out] GLRectangleTexture        A boolean that will hold whether or not GL_TEXTURE_RECTANGLE is enabled.
 * @param[out] PointSmooth               A boolean that will hold whether or not GL_POINT_SMOOTH is enabled.
 * @param[out] PointSize                 A floating point variable that will hold the current Point-Size.
 *
 */
void EnableDrawing(bool &GLTexture2D, bool &GLRectangleTexture, bool &PointSmooth, float &PointSize)
{
    GLTexture2D = glIsEnabled(GL_TEXTURE_2D);
    GLRectangleTexture = glIsEnabled(GL_TEXTURE_RECTANGLE);
    PointSmooth = glIsEnabled(GL_POINT_SMOOTH);
    glGetFloatv(GL_POINT_SIZE, &PointSize);

    glDisable(GL_TEXTURE_RECTANGLE);
    glDisable(GL_TEXTURE_2D);
    glEnable(GL_POINT_SMOOTH);
    glHint(GL_POINT_SMOOTH_HINT, GL_NICEST);

    glPushMatrix();
    glLoadIdentity();
}


/** @brief Disables Drawing after a call to EnableDrawing. Must be called after all rendering is finished.
 *
 * @param[in] DrawingEnabled           A boolean that holds the result of EnableDrawing and will hold the result of this function.
 * @param[in] GLTexture2D              A boolean that will hold whether or not GL_TEXTURE_2D was enabled.
 * @param[in] GLRectangleTexture       A boolean that will hold whether or not GL_TEXTURE_RECTANGLE was enabled.
 * @param[in] PointSmooth              A boolean indicating whether or not GL_POINT_SMOOTH was enabled.
 * @param[in] PointSize                A floating point variable that holds the previous Point-Size.
 *
 */
void DisableDrawing(bool GLTexture2D, bool GLRectangleTexture, bool PointSmooth, float PointSize)
{
    glPopMatrix();
    if (GLTexture2D) glEnable(GL_TEXTURE_2D);
    if (GLRectangleTexture) glEnable(GL_TEXTURE_RECTANGLE);
    if (!PointSmooth) glDisable(GL_POINT_SMOOTH);
}

GLuint LoadTexture(void* Buffer, int width, int height, GLenum Target)
{
    std::vector<std::uint8_t> Pixels(width * height * 4);
    void* P = Pixels.data();
    FlipImageBytes(Buffer, P, width, height);
    GLuint ID = 0;
    glGenTextures(1, &ID);
    glBindTexture(Target, ID);
    glPixelStorei(GL_UNPACK_ROW_LENGTH, width);
    glTexImage2D(Target, 0, GL_RGBA, width, height, 0, GL_BGRA, GL_UNSIGNED_BYTE, Pixels.data());
    glPixelStorei(GL_UNPACK_ROW_LENGTH, 0);
    glTexParameteri(Target, GL_TEXTURE_WRAP_S, Target == GL_TEXTURE_2D ? GL_REPEAT : GL_CLAMP_TO_EDGE);
    glTexParameteri(Target, GL_TEXTURE_WRAP_T, Target == GL_TEXTURE_2D ? GL_REPEAT : GL_CLAMP_TO_EDGE);
    glTexParameteri(Target, GL_TEXTURE_MIN_FILTER, GL_LINEAR);
    glTexParameteri(Target, GL_TEXTURE_MAG_FILTER, GL_LINEAR);
    glTexParameteri(Target, GL_TEXTURE_MIN_FILTER, GL_NEAREST);
    glTexParameteri(Target, GL_TEXTURE_MIN_FILTER, GL_NEAREST);
    return ID;
}

void DrawTexture(std::uint32_t Target, std::uint32_t ID, float X1, float Y1, float X2, float Y2, int Width, int Height)
{
    Width = Target == GL_TEXTURE_RECTANGLE ? Width : 1;
    Height = Target == GL_TEXTURE_RECTANGLE ? Height : 1;

    glEnable(Target);
    glBindTexture(Target, ID);
    glColor4ub(255, 255, 255, 255);
    glBegin(GL_QUADS);
        glTexCoord2f(0, Height);
        glVertex2f(X1, Y1);
        glTexCoord2f(0, 0);
        glVertex2f(X1, Y2);
        glTexCoord2f(Width, 0);
        glVertex2f(X2, Y2);
        glTexCoord2f(Width, Height);
        glVertex2f(X2, Y1);
    glEnd();
    glDisable(Target);
}

void BltMappedBuffer(void* buffer, int width, int height)
{
    GLuint Texture = LoadTexture(buffer, width, height, GL_TEXTURE_RECTANGLE);
    std::uint8_t* Ptr = (std::uint8_t*)buffer;
    for (int I = 0; I < height; ++I)
    {
        for (int J = 0; J < width; ++J)
        {
            std::uint8_t B = *(Ptr++);
            std::uint8_t G = *(Ptr++);
            std::uint8_t R = *(Ptr++);
            *(Ptr++) = (B == 0 && G == 0 && R == 0) ? 0 : 0xFF;
        }
    }

    DrawTexture(GL_TEXTURE_RECTANGLE, Texture, 0, 0, width, height, width, height);
    glDeleteTextures(1, &Texture);
}

BOOL GLHook_wglSwapBuffers(HDC hdc)
{
    GLint ViewPort[4] = {0};
    glGetIntegerv(GL_VIEWPORT, ViewPort);
    glPixelStorei(GL_PACK_ALIGNMENT, 4);
    std::vector<std::uint8_t> Buffer(ViewPort[2] * ViewPort[3] * 4);
    glReadPixels(0, 0, ViewPort[2], ViewPort[3], GL_BGRA, GL_UNSIGNED_BYTE, Buffer.data());

    float PointSize = 0;
    bool Drawing[3] = {0};
    EnableDrawing(Drawing[0], Drawing[1], Drawing[2], PointSize);

    if (SmartGlobal->version)
    {
        FlipImageBytes(Buffer.data(), SmartGlobal->img, ViewPort[2], ViewPort[3]);
        if (!IsIconic(WindowFromDC(hdc)))
        {
            int X = 0, Y = 0;
            BltSmartBuffer();

            SmartGlobal->getMousePos(X, Y);
            if (X != -1 && Y != -1)
            {
                glPointSize(4);
                glRasterPos2i(X, Y);
                glColor3ub(0xFF, 0, 0);
                glBegin(GL_POINTS);
                    glVertex3f(X, Y, 0);
                glEnd();
            }
        }
    }
    else
    {
        if (!SharedImageData || !SharedImageData->GetDataPointer())
        {
            CreateSharedMemory() || OpenSharedMemory();
        }
        void* Ptr = SharedImageData->GetDataPointer();
        FlipImageBytes(Buffer.data(), Ptr, ViewPort[2], ViewPort[3]);
        if (!IsIconic(WindowFromDC(hdc)))
            BltMappedBuffer(Ptr, ViewPort[2], ViewPort[3]);
    }

    DisableDrawing(Drawing[0], Drawing[1], Drawing[2], PointSize);

	return ptr_wglSwapBuffers(hdc);
}
