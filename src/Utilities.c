#include "Utilities.h"

const char* SharedImageName = "Local\\GLHookImage";
SharedMemory SharedImageData = {0};

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

bool OpenSharedMemory(uintptr_t id)
{
    int w = 0, h = 0;
    GetDesktopResolution(&w, &h);

    __FreeMemoryMap(&SharedImageData);
    sprintf(SharedImageData.MapName, "%s%p", SharedImageName, (void*)id);
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
