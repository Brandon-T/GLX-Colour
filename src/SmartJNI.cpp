/**  © 2013, Brandon T. All Rights Reserved.
  *
  *  This file is part of the GLX Library.
  *  GLX is free software: you can redistribute it and/or modify
  *  it under the terms of the GNU General Public License as published by
  *  the Free Software Foundation, either version 3 of the License, or
  *  (at your option) any later version.
  *
  *  GLX is distributed in the hope that it will be useful,
  *  but WITHOUT ANY WARRANTY; without even the implied warranty of
  *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
  *  GNU General Public License for more details.
  *
  *  You should have received a copy of the GNU General Public License
  *  along with GLX.  If not, see <http://www.gnu.org/licenses/>.
  */

#include "SMARTPlugin.hpp"
#include "Hooks.hpp"
#include <iostream>
#include "Bitmap.hpp"

SMARTInfo* SmartGlobal = nullptr;
bool SmartDebugEnabled = false;
bool SmartOpenGLEnabled = true;

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

extern "C" void SMARTPluginInit(SMARTInfo* ptr, bool* ReplaceButtons, int* ButtonCount, char*** ButtonText, int** ButtonIDs, _SMARTButtonPressed* ButtonCallback)
{
    SmartGlobal = ptr;
    if (ptr)
    {
        *ReplaceButtons = true;
        char** ButtonTexts = new char*[2];
        ButtonTexts[0] = const_cast<char*>("Disable OpenGL_Enable OpenGL");
        ButtonTexts[1] = const_cast<char*>("Enable Debug_Disable glDebug");

        int* IDs = new int[2];
        IDs[0] = 100;
        IDs[1] = 101;

        *ButtonCount = 2;
        *ButtonText = ButtonTexts;
        *ButtonIDs = IDs;
        *ButtonCallback = &SMARTButtonPressed;
    }
}
