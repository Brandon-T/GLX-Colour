#include "Utilities.h"

const char* SharedImageName = "Local\\GLHookImage";
SharedMemory SharedImageData = {0};


const char* __GetProcessID()
{
    static char buffer[32];
    memset(buffer, 0, sizeof(buffer));

    int res = sprintf(buffer, "_");
    sprintf(buffer + res, "%d", getpid());
    return buffer;
}

void __FlipImageBytes(void* In, void* Out, int width, int height, unsigned int Bpp)
{
   unsigned long Chunk = (Bpp > 24 ? width * 4 : width * 3 + width % 4);
   unsigned char* Destination = (unsigned char*)(Out);
   unsigned char* Source = ((unsigned char*)In) + Chunk * (height - 1);

   while(Source != In)
   {
      memcpy(Destination, Source, Chunk);
      Destination += Chunk;
      Source -= Chunk;
   }
}

bool __OpenMemoryMap(SharedMemory* shm)
{
    if (shm && !shm->hFileMap)
    {
        #if defined _WIN32 || defined _WIN64
        if ((shm->hFileMap = OpenFileMapping(FILE_MAP_ALL_ACCESS, false, shm->MapName)) == NULL)
        {
            return false;
        }

        if ((shm->pData = MapViewOfFile(shm->hFileMap, FILE_MAP_ALL_ACCESS, 0, 0, shm->Size)) == NULL)
        {
            CloseHandle(shm->hFileMap);
            return false;
        }

        #else

        if ((shm->hFileMap = open(shm->MapName, O_RDWR, 438)) == -1)
        {
            return false;
        }

        if ((shm->pData = mmap(NULL, shm->Size, PROT_READ | PROT_WRITE, MAP_FILE | MAP_SHARED, shm->hFileMap, 0)) == MAP_FAILED)
        {
            close(shm->hFileMap);
            return false;
        }
        #endif // defined
    }
    return true;
}

bool __CreateMemoryMap(SharedMemory* shm)
{
    #if defined _WIN32 || defined _WIN64
    if ((shm->hFileMap = CreateFileMapping(INVALID_HANDLE_VALUE, NULL, PAGE_READWRITE, 0, shm->Size, shm->MapName)) == NULL)
    {
        return false;
    }

    if ((shm->pData = MapViewOfFile(shm->hFileMap, FILE_MAP_ALL_ACCESS, 0, 0, shm->Size)) == NULL)
    {
        CloseHandle(shm->hFileMap);
        return false;
    }

    #else

    if ((shm->hFileMap = open(shm->MapName, O_RDWR | O_CREAT, 438)) == -1)
    {
        return false;
    }

    if ((shm->pData = mmap(NULL, shm->Size, PROT_READ | PROT_WRITE, MAP_FILE | MAP_SHARED, shm->hFileMap, 0)) == MAP_FAILED)
    {
        close(shm->hFileMap);
        return false;
    }
    #endif // defined
    return true;
}

bool __FreeMemoryMap(SharedMemory* shm)
{
    if (shm && shm->hFileMap)
    {
        #if defined _WIN32 || defined _WIN64
        if (shm->pData)
        {
            UnmapViewOfFile(shm->pData);
        }

        if (shm->hFileMap)
        {
            CloseHandle(shm->hFileMap);
        }

        #else

        if (shm->pData)
        {
            munmap(shm->pData, shm->Size);
        }

        if (shm->hFileMap)
        {
            close(shm->hFileMap);
        }
        #endif // defined

        memset(shm, 0, sizeof(SharedMemory));
        return true;
    }
    return false;
}

uint8_t* __ReadPixels(GLint ViewPort[4])
{
    uint8_t* Buffer = NULL;
    ptr_glGetIntegerv(GL_VIEWPORT, ViewPort);
    ptr_glPixelStorei(GL_PACK_ALIGNMENT, 4);

    free(Buffer);
    Buffer = malloc(ViewPort[2] * ViewPort[3] * 4);
    ptr_glReadPixels(0, 0, ViewPort[2], ViewPort[3], GL_BGRA, GL_UNSIGNED_BYTE, Buffer);
    return Buffer;
}

void __FreePixels(uint8_t** Pixels)
{
    if (Pixels && *Pixels)
    {
        free(*Pixels);
        *Pixels = NULL;
    }
}

#if defined _WIN32 || defined _WIN64
bool __isMinimised(HDC dc)
{
    return IsIconic(WindowFromDC(dc));
}
#else
bool __isMinimised(Display *dsp, Window wnd)
{
    Atom _NET_WM_STATE = XInternAtom(dsp, "_NET_WM_STATE", True);
    Atom _NET_WM_STATE_HIDDEN = XInternAtom(dsp, "_NET_WM_STATE_HIDDEN", True);

    Atom actualType;
    int actualFormat;
    long maxLength = LONG_MAX;
    unsigned char* propertyValue = NULL;
    unsigned long i, numItems, bytesAfter;


    if (XGetWindowProperty(dsp, wnd, _NET_WM_STATE, 0l, maxLength, false, XA_ATOM, &actualType, &actualFormat, &numItems, &bytesAfter, &propertyValue) == Success)
    {
        Atom* atoms = (Atom*)propertyValue;
        bool minimised = false;

        for (i = 0; i < numItems; ++i)
        {
            if (atoms[i] == _NET_WM_STATE_HIDDEN)
            {
                minimised = true;
            }
        }

        XFree(propertyValue);
        return minimised;
    }

    return false;
}
#endif // defined


void FlipImageBytes(void* in, void* out, int width, int height, unsigned int bpp)
{
    __FlipImageBytes(in, out, width, height, bpp);
}

void EnableDrawing(bool* GLTexture2D, bool* GLRectangleTexture, bool* PointSmooth, float* PointSize)
{
    *GLTexture2D = ptr_glIsEnabled(GL_TEXTURE_2D);
    *GLRectangleTexture = ptr_glIsEnabled(GL_TEXTURE_RECTANGLE);
    *PointSmooth = ptr_glIsEnabled(GL_POINT_SMOOTH);
    ptr_glGetFloatv(GL_POINT_SIZE, PointSize);

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

void GetDesktopResolution(int* width, int* height)
{
    #if defined _WIN32 || defined _WIN64
    RECT desktop = {0};
    const HWND hDesktop = GetDesktopWindow();
    GetWindowRect(hDesktop, &desktop);
    *width = desktop.right;
    *height = desktop.bottom;

    #else

     Display* dsp = XOpenDisplay(NULL);
     if (dsp)
     {
        Screen* scr = DefaultScreenOfDisplay(dsp);
        if (scr)
        {
            *width = scr->width;
            *height = scr->height;
        }
        XCloseDisplay(dsp);
     }
    #endif // defined
}

bool CreateSharedMemory(int pid)
{
    int w = 0, h = 0;
    GetDesktopResolution(&w, &h);

    __FreeMemoryMap(&SharedImageData);
    sprintf(SharedImageData.MapName, "%s%d", SharedImageName, pid);
    SharedImageData.Size = (!w || !h) ? TotalImageSize : w * h * 4 * 2;

    return __CreateMemoryMap(&SharedImageData);
}

bool OpenSharedMemory(int pid)
{
    int w = 0, h = 0;
    GetDesktopResolution(&w, &h);

    __FreeMemoryMap(&SharedImageData);
    sprintf(SharedImageData.MapName, "%s%d", SharedImageName, pid);
    SharedImageData.Size = (!w || !h) ? TotalImageSize : w * h * 4 * 2;

    return __OpenMemoryMap(&SharedImageData);
}

bool UnMapSharedMemory()
{
    return __FreeMemoryMap(&SharedImageData);
}

bool IsMinimised(void* dsp, unsigned long wnd)
{
    #if defined _WIN32 || defined _WIN64
    return __isMinimised(dsp);
    #else
    return __isMinimised(dsp, wnd);
    #endif // defined
}

GLuint LoadTexture(void* buffer, int width, int height, GLenum target)
{
    uint8_t* px = malloc(width * height * 4);
    __FlipImageBytes(buffer, px, width, height, 32);

    GLuint ID = 0;
    ptr_glGenTextures(1, &ID);
    ptr_glBindTexture(target, ID);
    ptr_glPixelStorei(GL_UNPACK_ROW_LENGTH, width);
    ptr_glTexImage2D(target, 0, GL_RGBA, width, height, 0, GL_BGRA, GL_UNSIGNED_BYTE, px);
    ptr_glPixelStorei(GL_UNPACK_ROW_LENGTH, 0);
    ptr_glTexParameteri(target, GL_TEXTURE_WRAP_S, target == GL_TEXTURE_2D ? GL_REPEAT : GL_CLAMP_TO_EDGE);
    ptr_glTexParameteri(target, GL_TEXTURE_WRAP_T, target == GL_TEXTURE_2D ? GL_REPEAT : GL_CLAMP_TO_EDGE);
    ptr_glTexParameteri(target, GL_TEXTURE_MIN_FILTER, GL_LINEAR);
    ptr_glTexParameteri(target, GL_TEXTURE_MAG_FILTER, GL_LINEAR);
    ptr_glTexParameteri(target, GL_TEXTURE_MIN_FILTER, GL_NEAREST);
    ptr_glTexParameteri(target, GL_TEXTURE_MIN_FILTER, GL_NEAREST);
    free(px);
    return ID;
}

void DrawTexture(uint32_t target, uint32_t id, float x1, float y1, float x2, float y2, int width, int height)
{
    width = target == GL_TEXTURE_RECTANGLE ? width : 1;
    height = target == GL_TEXTURE_RECTANGLE ? height : 1;

    ptr_glEnable(target);
    ptr_glBindTexture(target, id);
    ptr_glColor4ub(0xFF, 0xFF, 0xFF, 0xFF);
    ptr_glBegin(GL_QUADS);
        ptr_glTexCoord2f(0, height);
        ptr_glVertex2f(x1, y1);
        ptr_glTexCoord2f(0, 0);
        ptr_glVertex2f(x1, y2);
        ptr_glTexCoord2f(width, 0);
        ptr_glVertex2f(x2, y2);
        ptr_glTexCoord2f(width, height);
        ptr_glVertex2f(x2, y1);
    ptr_glEnd();
    ptr_glDisable(target);
}

void BlitBuffer(void* buffer, int width, int height)
{
    unsigned int Texture = LoadTexture(buffer, width, height, GL_TEXTURE_RECTANGLE);

    int I = 0, J = 0;
    uint8_t* Ptr = (uint8_t*)buffer;

    for (I = 0; I < height; ++I)
    {
        for (J = 0; J < width; ++J)
        {
            uint8_t B = *(Ptr++);
            uint8_t G = *(Ptr++);
            uint8_t R = *(Ptr++);
            *(Ptr++) = (B == 0 && G == 0 && R == 0) ? 0 : 0xFF;
        }
    }

    DrawTexture(GL_TEXTURE_RECTANGLE, Texture, 0, 0, width, height, width, height);
    ptr_glDeleteTextures(1, &Texture);
}

uint8_t* ReadGLPixels(GLint ViewPort[4])
{
    return __ReadPixels(ViewPort);
}

void FreeGLPixels(uint8_t** Pixels)
{
    return __FreePixels(Pixels);
}
