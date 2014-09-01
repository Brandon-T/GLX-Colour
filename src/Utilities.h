#ifndef UTILITIES_H_INCLUDED
#define UTILITIES_H_INCLUDED

#if defined _WIN32 || defined _WIN64
#include <windows.h>
#include <process.h>
#else
#include <sys/types.h>
#include <sys/mman.h>
#include <dlfcn.h>
#include <fcntl.h>
#include <unistd.h>
#include <X11/Xlib.h>
#include <X11/Xatom.h>
#endif // defined

#include "Exports.h"

#include <limits.h>
#include <stdint.h>
#include <stdbool.h>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>


#define SharedImageSize     8294400                 //Highest Resolution Support (restriction): 1920 x 1080 x sizeof(RGBA)
#define TotalImageSize      (SharedImageSize * 2)   //Image + DebugImage

typedef struct
{
    #if defined _WIN32 || defined _WIN64
    void* hFileMap;
    #else
    int hFileMap;
    #endif // defined

    void* pData;
    char MapName[256];
    size_t Size;
} SharedMemory;


extern const char* SharedImageName;
extern SharedMemory SharedImageData;


extern void GetDesktopResolution(int* width, int* height);

extern bool OpenSharedMemory(uintptr_t id);

extern bool UnMapSharedMemory();

extern bool IsMinimised(void* dsp, unsigned long wnd);

#endif // UTILITIES_H_INCLUDED
