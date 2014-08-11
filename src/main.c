#if defined _WIN32 || defined _WIN64
#include <windows.h>
#else
#include <X11/Xlib.h>
#include <X11/Xatom.h>
#endif // defined

#include "Exports.h"
#include "Utilities.h"
#include "SmartPlugin.h"


__attribute__((constructor)) void __load()
{
    Initialize();
}

__attribute__((destructor)) void __unload()
{
    UnMapSharedMemory();
    DeInitialize();
}

void __swapBuffers(void* dsp, unsigned long wnd)
{
    bool Drawing[3];
    float PointSize;
    GLint ViewPort[4] = {0};
    uint8_t* Buffer = ReadGLPixels(ViewPort);

    if (SmartGlobal && SmartGlobal->version)
    {
        FlipImageBytes(Buffer, SmartGlobal->img, ViewPort[2], ViewPort[3], 32);

        if (!IsMinimised(dsp, wnd))
        {
            int X = 0, Y = 0;
            EnableDrawing(&Drawing[0], &Drawing[1], &Drawing[2], &PointSize);

            if (SmartDebugEnabled)
            {
                BlitBuffer(SmartGlobal->dbg, SmartGlobal->width, SmartGlobal->height);
            }

            SmartGlobal->getMousePos(&X, &Y);
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
        if (!SharedImageData.hFileMap || !SharedImageData.pData)
        {
            OpenSharedMemory(getpid()) || CreateSharedMemory(getpid());
            #if !defined _WIN32 && !defined _WIN64
            ftruncate(SharedImageData.hFileMap, SharedImageData.Size);
            #endif // defined
        }

        FlipImageBytes(Buffer, SharedImageData.pData, ViewPort[2], ViewPort[3], 32);

        if (!IsMinimised(dsp, wnd))
        {
            EnableDrawing(&Drawing[0], &Drawing[1], &Drawing[2], &PointSize);
            void* DbgPtr = ((uint8_t*)SharedImageData.pData) + SharedImageSize;
            BlitBuffer(DbgPtr, ViewPort[2], ViewPort[3]);
            DisableDrawing(Drawing[0], Drawing[1], Drawing[2], PointSize);
        }
    }

    FreeGLPixels(&Buffer);
}


#if defined _WIN32 || defined _WIN64
extern __stdcall BOOL wglSwapBuffers(HDC hdc)
{
    __swapBuffers(hdc, 0);
	return ptr_wglSwapBuffers(hdc);
}

#else

extern void glXSwapBuffers(Display* dpy, GLXDrawable drawable)
{
    __swapBuffers(dpy, XRootWindow(dpy, 0));
    return ptr_glXSwapBuffers(dpy, drawable);
}
#endif // defined
