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

#include "Bitmap.h"

Bitmap::Bitmap(const char* FilePath) : Pixels(0), width(0), height(0), BitsPerPixel(0)
{
    std::fstream hFile(FilePath, std::ios::in | std::ios::binary);
    if (!hFile.is_open()) throw std::invalid_argument("Error: File Not Found.");

    hFile.seekg(0, std::ios::end);
    int Length = hFile.tellg();
    hFile.seekg(0, std::ios::beg);
    std::vector<std::uint8_t> FileInfo(Length);
    hFile.read(reinterpret_cast<char*>(FileInfo.data()), 54);

    if(FileInfo[0] != 'B' && FileInfo[1] != 'M')
    {
        hFile.close();
        throw std::invalid_argument("Error: Invalid File Format. Bitmap Required.");
    }

    if (FileInfo[28] != 24 && FileInfo[28] != 32)
    {
        hFile.close();
        throw std::invalid_argument("Error: Invalid File Format. 24 or 32 bit Image Required.");
    }

    BitsPerPixel = FileInfo[28];
    width = FileInfo[18] + (FileInfo[19] << 8);
    height = FileInfo[22] + (FileInfo[23] << 8);
    std::uint32_t PixelsOffset = FileInfo[10] + (FileInfo[11] << 8);
    std::uint32_t size = ((width * BitsPerPixel + 31) / 32) * 4 * height;
    Pixels.resize(size);

    hFile.seekg (PixelsOffset, std::ios::beg);
    hFile.read(reinterpret_cast<char*>(Pixels.data()), size);
    hFile.close();
}

Bitmap::Bitmap(const void* Ptr, int Width, int Height, int Bpp) : Pixels(0), width(Width), height(Height), BitsPerPixel(Bpp)
{
    Pixels.resize(((width * BitsPerPixel + 31) / 32) * 4 * height);
    memcpy(Pixels.data(), Ptr, Pixels.size());
}

void Bitmap::Save(const char* FilePath)
{
    std::fstream hFile(FilePath, std::ios::out | std::ios::binary);
    if (!hFile.is_open()) throw std::invalid_argument("Error: File not found.");

    std::uint32_t Trash = 0;
    std::uint16_t Planes = 1;
    std::uint32_t biSize = 40;
    std::uint16_t Type = 0x4D42;
    std::uint32_t compression = 0;
    std::uint32_t PixelsOffsetBits = 54;
    std::uint32_t size = ((width * BitsPerPixel + 31) / 32) * 4 * height;
    std::uint32_t bfSize = 54 + size;

    hFile.write(reinterpret_cast<char*>(&Type), sizeof(Type));
    hFile.write(reinterpret_cast<char*>(&bfSize), sizeof(bfSize));
    hFile.write(reinterpret_cast<char*>(&Trash), sizeof(std::uint32_t));
    hFile.write(reinterpret_cast<char*>(&PixelsOffsetBits), sizeof(PixelsOffsetBits));
    hFile.write(reinterpret_cast<char*>(&biSize), sizeof(biSize));
    hFile.write(reinterpret_cast<char*>(&width), sizeof(width));
    hFile.write(reinterpret_cast<char*>(&height), sizeof(height));
    hFile.write(reinterpret_cast<char*>(&Planes), sizeof(Planes));
    hFile.write(reinterpret_cast<char*>(&BitsPerPixel), sizeof(BitsPerPixel));
    hFile.write(reinterpret_cast<char*>(&compression), sizeof(compression));
    hFile.write(reinterpret_cast<char*>(&size), sizeof(size));
    hFile.write(reinterpret_cast<char*>(&Trash), sizeof(std::uint32_t) * 4);
    hFile.write(reinterpret_cast<char*>(Pixels.data()), size);
    hFile.close();
}
