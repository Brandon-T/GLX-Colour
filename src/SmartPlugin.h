#ifndef SMARTPLUGIN_H_INCLUDED
#define SMARTPLUGIN_H_INCLUDED

#include <stdbool.h>
#include <stdlib.h>

typedef void (*_SMARTGetMousePos)(int* x, int* y);
typedef void (*_SMARTSetCapture)(bool enabled);
typedef void (*_SMARTButtonPressed)(int id, bool state);

typedef struct
{
    int version;
    void *img, *dbg;
    int width, height;
    _SMARTGetMousePos getMousePos;
    _SMARTSetCapture setCapture;
} SMARTInfo;



typedef void (*_SMARTPluginInit)(SMARTInfo* ptr, bool* ReplaceButtons, int* ButtonCount, char*** ButtonText, int** ButtonIDs, _SMARTButtonPressed* ButtonCallback);

extern SMARTInfo* SmartGlobal;
extern bool SmartDebugEnabled;
extern bool SmartOpenGLEnabled;

#endif // SMARTPLUGIN_H_INCLUDED
