#include "SmartPlugin.h"

SMARTInfo* SmartGlobal = NULL;
bool SmartDebugEnabled = false;
bool SmartOpenGLEnabled = true;
int btnIDs[2] = {100, 101};
char* btnTexts[2] = {"Disable OpenGL_Enable OpenGL", "Enable Debug_Disable glDebug"};

void SMARTButtonPressed(int ID, bool State)
{
    switch(ID)
    {
        case 100:
            if (State)
            {
                SmartGlobal->setCapture(false);
                SmartOpenGLEnabled = true;
            }
            else
            {
                SmartGlobal->setCapture(true);
                SmartOpenGLEnabled = false;
            }
            break;

        case 101:
            SmartDebugEnabled = State ? false : true;
            break;

    }
}

void SMARTPluginInit(SMARTInfo* ptr, bool* ReplaceButtons, int* ButtonCount, char*** ButtonText, int** ButtonIDs, _SMARTButtonPressed* ButtonCallback)
{
    SmartGlobal = ptr;
    if (ptr)
    {
        *ReplaceButtons = true;
        *ButtonCount = sizeof(btnIDs) / sizeof(int);
        *ButtonText = btnTexts;
        *ButtonIDs = btnIDs;
        *ButtonCallback = &SMARTButtonPressed;
    }
}
