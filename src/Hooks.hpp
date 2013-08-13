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

#ifndef HOOKS_HPP_INCLUDED
#define HOOKS_HPP_INCLUDED

#include <cstring>
#include <vector>
#include <memory>
#include "Exports.hpp"
#include "SharedMemory.hpp"
#include "SMARTPlugin.hpp"

#define SharedImageSize 8294400

extern const char* SharedImageName;
extern const char* SharedDebugName;
extern std::unique_ptr<SharedMemory> SharedImageData;
extern std::unique_ptr<SharedMemory> SharedDebugData;

extern void GetDesktopResolution(int &width, int &height);

extern bool InitializeAll();

extern bool CreateSharedMemory();

extern bool OpenSharedMemory();

extern bool UnMapSharedMemory();

GLuint LoadTexture(void* Buffer, int width, int height, GLenum Target);
 
void DrawTexture(std::uint32_t Target, std::uint32_t ID, float X1, float Y1, float X2, float Y2, int Width, int Height);
 
extern "C" __stdcall BOOL GLHook_wglSwapBuffers(HDC hdc);

#endif // HOOKS_HPP_INCLUDED
