/**  © 2013, Brandon T. All Rights Reserved.
  *
  *  This file is part of the GLX Library.
  *  GLX is free software: you can redistribute it and/or modify
  *  it under the terms of the GNU General Public License as published by
  *  the Free Software Foundation, either version 3 of the License, or
  *  (at your option) any later version.
  *
  *  GLX is distributed in the hope that it will be useful,
  *  but WITHOUT ANY WARRANTY; without even the implied warranty of
  *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
  *  GNU General Public License for more details.
  *
  *  You should have received a copy of the GNU General Public License
  *  along with GLX.  If not, see <http://www.gnu.org/licenses/>.
  */

#include "Hooks.hpp"

std::unique_ptr<SharedMemory> SharedImageData;
const char* SharedImageName = "Local\\GLHookImage";

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
    return ((CreateSharedMemory(getpid()) || OpenSharedMemory(getpid())) && Initialize());
}

bool CreateSharedMemory(int ProcessID)
{
    int Width = 0, Height = 0;
    GetDesktopResolution(Width, Height);
    SharedImageData.reset(new SharedMemory(SharedImageName + std::to_string(ProcessID)));
    return SharedImageData->MapMemory(Width || Height == 0 ? TotalImageSize : Width * Height * 4 * 2);
}

bool OpenSharedMemory(int ProcessID)
{
    int Width = 0, Height = 0;
    GetDesktopResolution(Width, Height);
    SharedImageData.reset(new SharedMemory(SharedImageName + std::to_string(ProcessID)));
    return SharedImageData->OpenMemoryMap(Width || Height == 0 ? SharedImageSize : Width * Height * 4 * 2);
}

bool UnMapSharedMemory()
{
    SharedImageData.reset(nullptr);
    return true;
}

void FlipImageBytes(void* In, void* &Out, int width, int height, unsigned int Bpp)
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

void EnableDrawing(bool &GLTexture2D, bool &GLRectangleTexture, bool &PointSmooth, float &PointSize)
{
    GLTexture2D = ptr_glIsEnabled(GL_TEXTURE_2D);
    GLRectangleTexture = ptr_glIsEnabled(GL_TEXTURE_RECTANGLE);
    PointSmooth = ptr_glIsEnabled(GL_POINT_SMOOTH);
    ptr_glGetFloatv(GL_POINT_SIZE, &PointSize);

    ptr_glDisable(GL_TEXTURE_RECTANGLE);
    ptr_glDisable(GL_TEXTURE_2D);
    ptr_glEnable(GL_POINT_SMOOTH);
    ptr_glHint(GL_POINT_SMOOTH_HINT, GL_NICEST);

    ptr_glPushMatrix();
    ptr_glLoadIdentity();
}

void DisableDrawing(bool GLTexture2D, bool GLRectangleTexture, bool PointSmooth, float PointSize)
{
    ptr_glPopMatrix();
    if (GLTexture2D) ptr_glEnable(GL_TEXTURE_2D);
    if (GLRectangleTexture) ptr_glEnable(GL_TEXTURE_RECTANGLE);
    if (!PointSmooth) ptr_glDisable(GL_POINT_SMOOTH);
}

GLuint LoadTexture(void* Buffer, int width, int height, GLenum Target)
{
    std::vector<std::uint8_t> Pixels(width * height * 4);
    void* P = Pixels.data();
    FlipImageBytes(Buffer, P, width, height);
    GLuint ID = 0;
    ptr_glGenTextures(1, &ID);
    ptr_glBindTexture(Target, ID);
    ptr_glPixelStorei(GL_UNPACK_ROW_LENGTH, width);
    ptr_glTexImage2D(Target, 0, GL_RGBA, width, height, 0, GL_BGRA, GL_UNSIGNED_BYTE, Pixels.data());
    ptr_glPixelStorei(GL_UNPACK_ROW_LENGTH, 0);
    ptr_glTexParameteri(Target, GL_TEXTURE_WRAP_S, Target == GL_TEXTURE_2D ? GL_REPEAT : GL_CLAMP_TO_EDGE);
    ptr_glTexParameteri(Target, GL_TEXTURE_WRAP_T, Target == GL_TEXTURE_2D ? GL_REPEAT : GL_CLAMP_TO_EDGE);
    ptr_glTexParameteri(Target, GL_TEXTURE_MIN_FILTER, GL_LINEAR);
    ptr_glTexParameteri(Target, GL_TEXTURE_MAG_FILTER, GL_LINEAR);
    ptr_glTexParameteri(Target, GL_TEXTURE_MIN_FILTER, GL_NEAREST);
    ptr_glTexParameteri(Target, GL_TEXTURE_MIN_FILTER, GL_NEAREST);
    return ID;
}

void DrawTexture(std::uint32_t Target, std::uint32_t ID, float X1, float Y1, float X2, float Y2, int Width, int Height)
{
    Width = Target == GL_TEXTURE_RECTANGLE ? Width : 1;
    Height = Target == GL_TEXTURE_RECTANGLE ? Height : 1;

    ptr_glEnable(Target);
    ptr_glBindTexture(Target, ID);
    ptr_glColor4ub(255, 255, 255, 255);
    ptr_glBegin(GL_QUADS);
        ptr_glTexCoord2f(0, Height);
        ptr_glVertex2f(X1, Y1);
        ptr_glTexCoord2f(0, 0);
        ptr_glVertex2f(X1, Y2);
        ptr_glTexCoord2f(Width, 0);
        ptr_glVertex2f(X2, Y2);
        ptr_glTexCoord2f(Width, Height);
        ptr_glVertex2f(X2, Y1);
    ptr_glEnd();
    ptr_glDisable(Target);
}

void BltMappedBuffer(void* buffer, int width, int height)
{
    Texture = LoadTexture(buffer, width, height, GL_TEXTURE_RECTANGLE);
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
    ptr_glDeleteTextures(1, &Texture);
}

#if defined _WIN32 || defined _WIN64
extern "C" BOOL __stdcall wglSwapBuffers(HDC hdc)
{
    GLint ViewPort[4] = {0};
    ptr_glGetIntegerv(GL_VIEWPORT, ViewPort);
    ptr_glPixelStorei(GL_PACK_ALIGNMENT, 4);
    static std::vector<std::uint8_t> Buffer;

    Buffer.resize(ViewPort[2] * ViewPort[3] * 4);
    ptr_glReadPixels(0, 0, ViewPort[2], ViewPort[3], GL_BGRA, GL_UNSIGNED_BYTE, Buffer.data());

    float PointSize = 0;
    bool Drawing[3] = {0};

    if (SmartGlobal && SmartGlobal->version)
    {
        FlipImageBytes(Buffer.data(), SmartGlobal->img, ViewPort[2], ViewPort[3]);
        if (!IsIconic(WindowFromDC(hdc)))
        {
            EnableDrawing(Drawing[0], Drawing[1], Drawing[2], PointSize);
            int X = 0, Y = 0;
            if (SmartDebugEnabled)
            {
                BltSmartBuffer();
            }

            SmartGlobal->getMousePos(X, Y);
            if (X != -1 && Y != -1)
            {
                ptr_glPointSize(4);
                ptr_glRasterPos2i(X, Y);
                ptr_glColor3ub(0xFF, 0, 0);
                ptr_glBegin(GL_POINTS);
                    ptr_glVertex3f(X, Y, 0);
                ptr_glEnd();
            }
            DisableDrawing(Drawing[0], Drawing[1], Drawing[2], PointSize);
        }
    }
    else
    {
        if (!SharedImageData || !SharedImageData->GetDataPointer())
        {
            CreateSharedMemory(getpid()) || OpenSharedMemory(getpid());
        }

        void* ImgPtr = SharedImageData->GetDataPointer();
        FlipImageBytes(Buffer.data(), ImgPtr, ViewPort[2], ViewPort[3]);
        if (!IsIconic(WindowFromDC(hdc)))
        {
            EnableDrawing(Drawing[0], Drawing[1], Drawing[2], PointSize);
            void* DbgPtr = reinterpret_cast<std::uint8_t*>(SharedImageData->GetDataPointer()) + SharedImageSize;
            BltMappedBuffer(DbgPtr, ViewPort[2], ViewPort[3]);
            DisableDrawing(Drawing[0], Drawing[1], Drawing[2], PointSize);
        }
    }

	return ptr_wglSwapBuffers(hdc);
}
#endif
