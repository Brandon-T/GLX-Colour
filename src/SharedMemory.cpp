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

#include "SharedMemory.hpp"

SharedMemory::SharedMemory(std::string MapName) : hFileMap(0), pData(nullptr), MapName(MapName), Size(0), Debug(false) {}
SharedMemory::SharedMemory(std::string MapName, std::size_t Size) : hFileMap(0), pData(nullptr), MapName(MapName), Size(Size), Debug(false) {}
SharedMemory::~SharedMemory()
{
    ReleaseMemory();
}

void* SharedMemory::GetDataPointer()
{
    void* Ptr = pData;
    return Ptr;
}

bool SharedMemory::OpenMemoryMap(std::size_t Size)
{
    this->Size = Size;

    #if defined _WIN32 || defined _WIN64
    if ((hFileMap = OpenFileMapping(FILE_MAP_ALL_ACCESS, false, MapName.c_str())) == nullptr)
    {
        if (Debug) std::cout << "\nCould Not Open Shared Memory Map.\n";
        return false;
    }

    if ((pData = MapViewOfFile(hFileMap, FILE_MAP_ALL_ACCESS, 0, 0, Size)) == nullptr)
    {
        if (Debug) std::cout << "\nCould Not Map View Of File.\n";
        CloseHandle(hFileMap);
        return false;
    }

    #else

    if ((hFileMap = open(MapName.c_str(), O_RDWR | O_CREAT, 438)) == -1)
    {
        if (Debug) std::cout << "\nCould Not Open Shared Memory Map.\n";
        return false;
    }

    if ((pData = mmap(nullptr, Size, PROT_READ | PROT_WRITE, MAP_FILE | MAP_SHARED, hFileMap, 0)) == MAP_FAILED)
    {
        if (Debug) std::cout << "\nCould Not Map View Of File.\n";
        close(hFileMap);
        return false;
    }
    #endif

    if (Debug) std::cout << "\nInter-Process Communication Successful.\n";
    return true;
}

bool SharedMemory::MapMemory(std::size_t Size)
{
    this->Size = Size;

    #if defined _WIN32 || defined _WIN64
    if ((hFileMap = CreateFileMapping(INVALID_HANDLE_VALUE, nullptr, PAGE_READWRITE, 0, Size, MapName.c_str())) == nullptr)
    {
        if (Debug) std::cout << "\nCould Not Create Shared Memory Map.\n";
        return false;
    }

    if ((pData = MapViewOfFile(hFileMap, FILE_MAP_ALL_ACCESS, 0, 0, Size)) == nullptr)
    {
        if (Debug) std::cout << "\nCould Not Map View Of File.\n";
        CloseHandle(hFileMap);
        return false;
    }

    #else

    if ((hFileMap = open(MapName.c_str(), O_RDWR | O_CREAT, 438)) == -1)
    {
        if (Debug) std::cout << "\nCould Not Create Shared Memory Map.\n";
        return false;
    }

    if ((pData = mmap(nullptr, Size, PROT_READ | PROT_WRITE, MAP_FILE | MAP_SHARED, hFileMap, 0)) == MAP_FAILED)
    {
        if (Debug) std::cout << "\nCould Not Map View Of File.\n";
        close(hFileMap);
        return false;
    }
    #endif

    if (Debug) std::cout << "\nMapped Shared Memory Successfully.\n";
    return true;
}

bool SharedMemory::ReleaseMemory()
{
    bool Result = false;
    #if defined _WIN32 || defined _WIN64
    if (pData)
    {
        Result = UnmapViewOfFile(pData);
        pData = nullptr;
        if (Result && Debug)
        {
            std::cout << "\nMemory Un-Mapped Successfully.\n";
        }
    }

    if (hFileMap)
    {
        if (CloseHandle(hFileMap))
        {
            hFileMap = nullptr;
            Result = Result && true;
            if (Debug) std::cout << "\nMemory Map Closed Successfully.\n";
        }
    }

    #else

    if (pData)
    {
        Result = munmap(pData, Size);
        if (!Result && Debug)
        {
            std::cout << "\nMemory Un-Mapped Successfully.\n";
        }
        pData = nullptr;
        return true;
    }

    if (hFileMap)
    {
        if (!close(hFileMap))
        {
            hFileMap = 0;
            if (Debug) std::cout << "\nMemory Map Closed Successfully.\n";
        }
    }
    #endif
    return Result;
}

void SharedMemory::SetDebug(bool On)
{
    Debug = On;
}
