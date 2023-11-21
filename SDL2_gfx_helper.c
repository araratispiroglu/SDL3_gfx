#include "SDL2_gfx_helper.h"

SDL_Surface *SDL_CreateRGBSurface(Uint32 flags, int width, int height, int depth, Uint32 Rmask, Uint32 Gmask, Uint32 Bmask, Uint32 Amask)
{
    return SDL_CreateSurface(width, height,
            SDL_GetPixelFormatEnumForMasks(depth, Rmask, Gmask, Bmask, Amask));
}