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
