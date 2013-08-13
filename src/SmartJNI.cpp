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
