#ifndef EXPORTS_H_INCLUDED
#define EXPORTS_H_INCLUDED

#if defined _WIN32 || defined _WIN64
#include <windows.h>
extern HINSTANCE hInstance;
#else
#include <dlfcn.h>
#endif

#include <stdint.h>
#include <string.h>
#include <stdbool.h>
#include "Utilities.h"


extern bool GLXSetup(void* ID);
extern unsigned int WindowToPID(const void* NativeWindow);
extern bool IsWindowMinimised(const void* NativeWindow);
extern void* GLXImagePointer();
extern void* GLXDebugPointer();
extern void GLXClearDebug();

extern int GetPluginABIVersion();
extern int GetFunctionCount();
extern int GetFunctionInfo(int Index, void** Address, char** Definition);

#endif
