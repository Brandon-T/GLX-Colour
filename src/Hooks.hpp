#ifndef HOOKS_HPP_INCLUDED
#define HOOKS_HPP_INCLUDED

#include <cstring>
#include <vector>
#include <memory>
#include "Exports.hpp"
#include "SharedMemory.hpp"
#include "SMARTPlugin.hpp"

/** @file Hooks.cpp */

/** @brief Highest Resolution Support: 1920 x 1080 x sizeof(RGBA).
 *
 */
#define SharedImageSize 8294400

/** @brief Global variables holding the Shared-Memory Identifier.
 *
 */
extern const char* SharedImageName;
extern const char* SharedDebugName;


/** @brief Global class instance pointers holding all information about the mapped memory region.
 *
 */
extern std::unique_ptr<SharedMemory> SharedImageData;
extern std::unique_ptr<SharedMemory> SharedDebugData;

/** @brief Retrieves the desktop's resolution.
 *
 * @param[out] width            A reference variable in which the width will be stored, in logical-units.
 * @param[out] height           A reference variable in which the height will be stored, in logical-units.
 *
 */
extern void GetDesktopResolution(int &width, int &height);

/** @brief  Initializes all function pointers and Creates/Opens a memory mapped region for reading and writing data.
 *
 * @return  Whether the mapped region was be opened or created and all function pointers were initialized successfully.
 *
 */
extern bool InitializeAll();


/** @brief  Creates a shared/mapped memory region using the 'SharedImageName' variable.
 *
 * @return  Whether the mapped region was created successfully.
 *
 */
extern bool CreateSharedMemory();


/** @brief Opens a shared/mapped memory region using the 'SharedImageName' variable.
 *
 * @return Whether the mapped region was opened successfully.
 *
 */
extern bool OpenSharedMemory();


/** @brief Un-maps the shared memory region opened or created using the 'SharedImageName' varaible.
 *
 * @return Whether the mapped region was successfully un-mapped/closed.
 *
 */
extern bool UnMapSharedMemory();

/** @brief Swaps the Front and Back buffers. Also writes the buffers to the Mapped Memory Region.
 *
 * @param[in] hdc Specifies a device context. If the current pixel format for the window referenced by this device context includes a back buffer, the function exchanges the front and back buffers.
 * @return    Whether the
 *
 */

 GLuint LoadTexture(void* Buffer, int width, int height, GLenum Target);
 void DrawTexture(std::uint32_t Target, std::uint32_t ID, float X1, float Y1, float X2, float Y2, int Width, int Height);
extern "C" __stdcall BOOL GLHook_wglSwapBuffers(HDC hdc);

#endif // HOOKS_HPP_INCLUDED
