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

#ifndef SHAREDMEMORY_HPP_INCLUDED
#define SHAREDMEMORY_HPP_INCLUDED

#if defined _WIN32 || defined _WIN64
    #include <windows.h>
#else
    #include <sys/types.h>
    #include <sys/mman.h>
    #include <dlfcn.h>
    #include <fcntl.h>
    #include <unistd.h>
#endif

#include <iostream>

class SharedMemory
{
    private:
        void* FromFile;
        #if defined _WIN32 || defined _WIN64
        void* hFileMap;
        #else
        int hFileMap;
        #endif
        void* pData;
        std::string MapName;
        std::size_t Size;
        bool Debug;

    public:
        SharedMemory(std::string MapName);
        SharedMemory(std::string MapName, std::size_t Size);
        ~SharedMemory();

        SharedMemory(const SharedMemory& Shm) = delete;
        SharedMemory(SharedMemory && Shm) = delete;
        SharedMemory& operator = (const SharedMemory& Shm) = delete;
        SharedMemory& operator = (SharedMemory && Shm) = delete;

        void* GetDataPointer();

        bool OpenMemoryMap(std::size_t Size);

        bool MapMemory(std::size_t Size);

        bool ReleaseMemory();

        void SetDebug(bool On);
};

#endif // SHAREDMEMORY_HPP_INCLUDED
