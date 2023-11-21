#ifndef _SDL2_gfx_helper_h
#define _SDL2_gfx_helper_h

/* Set up for C function definitions, even when using C++ */
#ifdef __cplusplus
extern "C" {
#endif


#include <SDL3/SDL.h>

#ifdef _MSC_VER
#  if defined(DLL_EXPORT) && !defined(LIBSDL2_GFX_DLL_IMPORT)
#    define SDL2_GFX_HELPER __declspec(dllexport)
#  else
#    ifdef LIBSDL2_GFX_DLL_IMPORT
#      define SDL2_GFX_HELPER __declspec(dllimport)
#    endif
#  endif
#endif
#ifndef SDL2_GFX_HELPER
#  define SDL2_GFX_HELPER extern
#endif

	SDL2_GFX_HELPER SDL_Surface *SDL_CreateRGBSurface(Uint32 flags, int width, int height, int depth, Uint32 Rmask, Uint32 Gmask, Uint32 Bmask, Uint32 Amask);

#ifdef __cplusplus
}
#endif

#endif				/* _SDL2_gfx_helper_h */
