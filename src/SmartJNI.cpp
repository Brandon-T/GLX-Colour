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

#include "SmartPlugin.hpp"
#include "Hooks.hpp"
#include <iostream>
#include "Bitmap.h"

unsigned int Texture = 0;
SMARTInfo* SmartGlobal = nullptr;

extern "C" void SMARTPluginInit(SMARTInfo *ptr)
{
    SmartGlobal = ptr;
    if (ptr)
    {
        SmartGlobal->setCapture(false);
    }
}

void BltSmartBuffer()
{
    if (SmartGlobal != nullptr)
    {
        GLuint Texture = LoadTexture(SmartGlobal->dbg, SmartGlobal->width, SmartGlobal->height, GL_TEXTURE_RECTANGLE);
        std::uint8_t* Ptr = (std::uint8_t*)SmartGlobal->dbg;
        for (int I = 0; I < SmartGlobal->height; ++I)
        {
            for (int J = 0; J < SmartGlobal->width; ++J)
            {
                std::uint8_t B = *(Ptr++);
                std::uint8_t G = *(Ptr++);
                std::uint8_t R = *(Ptr++);
                *(Ptr++) = (B == 0 && G == 0 && R == 0) ? 0 : 0xFF;
            }
        }

        DrawTexture(GL_TEXTURE_RECTANGLE, Texture, 0, 0, SmartGlobal->width, SmartGlobal->height, SmartGlobal->width, SmartGlobal->height);
        glDeleteTextures(1, &Texture);
    }
}
