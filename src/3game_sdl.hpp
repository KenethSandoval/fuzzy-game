#ifndef THREEGAME_SDL_HPP_
#define THREEGAME_SDL_HPP_

#include "./3game_tile.hpp"
#include "./3game_math.hpp"

int sec(int code) {
  if(code < 0) {
    fprintf(stderr, "SDL ERROR: %s\n", SDL_GetError());
    exit(1);
  }
  return code;
}

template<typename T>
T *sec(T *ptr) {
  if(ptr == nullptr) {
    fprintf(stderr, "SDL ERROR: %s\n", SDL_GetError());
    exit(1);
  }

  return ptr;
}

SDL_Rect rect_for_sdl(Rect<int> rect) {
  return { rect.pos.x, rect.pos.y, rect.size.x, rect.size.y };
}

void fill_rect(SDL_Renderer *renderer, Rect<float> rect, Hex_Color color) {
  const SDL_Rect sdl_rect = rect_for_sdl(rect.map(floorf).cast_to<int>());
  sec(SDL_SetRenderDrawColor(renderer, UNPACK_HEX_COLOR(color)));
  sec(SDL_RenderFillRect(renderer, &sdl_rect));
}

#endif
