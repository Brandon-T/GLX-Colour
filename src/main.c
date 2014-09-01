#if defined _WIN32 || defined _WIN64
#include <windows.h>
#else
#include <X11/Xlib.h>
#include <X11/Xatom.h>
#endif // defined

#include "Exports.h"
#include "Utilities.h"


#if defined _WIN32 || defined _WIN64
extern bool __stdcall DllMain(HINSTANCE hinstDLL, DWORD fdwReason, LPVOID lpvReserved)
{
    switch(fdwReason)
    {
        case DLL_PROCESS_ATTACH:
        {
            hInstance = hinstDLL;
            DisableThreadLibraryCalls(hinstDLL);
        }
        break;

        case DLL_PROCESS_DETACH:
        {
            UnMapSharedMemory();
        }
        break;
    }
    return true;
}
#endif
__attribute__((constructor)) void __load()
{
}

__attribute__((destructor)) void __unload()
{
    UnMapSharedMemory();
}
