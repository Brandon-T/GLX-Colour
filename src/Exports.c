#include "Exports.h"

#if defined _WIN32 || defined _WIN64
HINSTANCE hInstance = NULL;
#endif

static const char* Exports[] =
{
    "GLXSetup", "Function GLXSetup(Identifier: PtrUInt): Boolean;",
    "GLXImagePointer", "Function GLXImagePointer: PtrUInt;",
    "GLXDebugPointer", "Function GLXDebugPointer: PtrUInt;",
    "GLXClearDebug", "Procedure GLXClearDebug;",
    "WindowToPID", "Function WindowToPID(const NativeWindow: PtrUInt): PtrUInt;",
	"GetDesktopResolution", "Procedure GetDesktopResolution(var Width, Height: Integer);",
	"IsWindowMinimised", "Function IsMinimised(NativeWindow: PtrUInt): Boolean;",
};

const unsigned int ExportCount = sizeof(Exports) / (sizeof(Exports[0]) * 2);

bool GLXSetup(void* ID)
{
    return OpenSharedMemory((uintptr_t)ID);
}

unsigned int WindowToPID(const void* NativeWindow)
{
    #if defined _WIN32 || defined _WIN64
    DWORD PID = 0;
    GetWindowThreadProcessId((HWND)NativeWindow, &PID);
    return PID;
    #else
    Atom _NET_WM_PID = XInternAtom(dsp, "_NET_WM_PID", True);

    Atom actualType;
    int actualFormat;
    unsigned char* propertyValue = NULL;
    unsigned long numItems, bytesAfter;

    if (XGetWindowProperty(dsp, wnd, _NET_WM_PID, 0, 1, false, XA_CARDINAL, &actualType, &actualFormat, &numItems, &bytesAfter, &propertyValue) == Success)
    {
        if (propertyValue)
        {
            int pid = *((unsigned long*)propertyValue);
            XFree(propertyValue);
            return pid;
        }
    }
    return 0;
    #endif
}

bool IsWindowMinimised(const void* NativeWindow)
{
    #if defined _WIN32 || defined _WIN64
    return IsIconic((HWND)NativeWindow);
    #else
    Display* dsp = XOpenDisplay(NULL);
    if (dsp)
    {
        bool res = IsMinimised(dsp, NativeWindow);
        XCloseDisplay(dsp);
        return res;
    }
    return true;
    #endif
}

void* GLXImagePointer()
{
    return SharedImageData.pData;
}

void* GLXDebugPointer()
{
    return ((uint8_t*)SharedImageData.pData) + (SharedImageData.Size / 2);
}

void GLXClearDebug()
{
    memset(GLXDebugPointer(), 0, SharedImageData.Size / 2);
}

int GetPluginABIVersion()
{
	return 2;
}

int GetFunctionCount()
{
	return ExportCount;
}

int GetFunctionInfo(int Index, void** Address, char** Definition)
{
	if (Index < ExportCount)
	{
		#ifdef _MSC_VER
		#pragma warning(disable: 4996)
		#endif
		strcpy(*Definition, Exports[Index * 2 + 1]);
		#if defined _WIN32 || defined _WIN64
		*Address = GetProcAddress(hInstance, Exports[Index * 2]);
		#else
		*Address = dlsym(RTLD_DEFAULT, Exports[Index * 2]);
		#endif
		return Index;
	}
	return -1;
}
