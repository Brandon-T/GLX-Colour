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

#ifndef BITMAP_H_INCLUDED
#define BITMAP_H_INCLUDED

#include <iostream>
#include <fstream>
#include <vector>
#include <stdexcept>

class Bitmap
{
    private:
        std::vector<std::uint8_t> Pixels;
        std::uint32_t width, height;
        std::uint16_t BitsPerPixel;

    public:
        Bitmap(const char* FilePath);
        Bitmap(const void* Ptr, int Widht, int Height, int Bpp = 32);
        void Save(const char* FilePath);

        inline std::uint16_t Bits()
        {
            return BitsPerPixel;
        }

        inline int Width() const
        {
            return width;
        }

        inline int Height() const
        {
            return height;
        }

        inline std::uint8_t* GetPixels()
        {
            return Pixels.data();
        }

        inline std::uint32_t GetPixel(int X, int Y) const
        {
            return Pixels[Y * width + X];
        }

        inline void SetPixel(int X, int Y, std::uint32_t Color)
        {
            Pixels[Y * width + X] = Color;
        }
};

#endif // BITMAP_H_INCLUDED
