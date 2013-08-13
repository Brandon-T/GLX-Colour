#include "Hooks.hpp"

/** A macro used for Exporting a function.
 *
 */
#define __export __declspec(dllexport)

/** @file main.cpp */

/** @brief Main entry for Windows. Initializes all function pointers and libraries upon Loading. Unloads all libraries and destroys all pointers upon Unloading.
 *
 */

extern "C" __export bool __stdcall DllMain(HINSTANCE hinstDLL, DWORD fdwReason, LPVOID lpvReserved)
{
    switch(fdwReason)
    {
        case DLL_PROCESS_ATTACH:
        {
            DisableThreadLibraryCalls(hinstDLL);
            return Initialize();
        }
        break;

        case DLL_PROCESS_DETACH:
        {
            DeInitialize();
        }
        break;
    }
    return true;
}
