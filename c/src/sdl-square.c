#include "SDL_events.h"
#include "SDL_render.h"
#include "SDL_shape.h"
#include "SDL_video.h"
#include <SDL.h>
#include <stdbool.h>

const int window_width = 800;
const int window_height = 600;
const int square_size = 256;

struct Square {
  bool red;
  SDL_Rect rect;
};

void draw_square(SDL_Renderer* renderer, struct Square* square) {
  if (square->red) {
    SDL_SetRenderDrawColor(renderer, 255, 0, 0, 255);
  } else {
    SDL_SetRenderDrawColor(renderer, 0, 0, 255, 255);
  }

  SDL_RenderFillRect(renderer, &square->rect);
}

int main() {
  bool quit = false;

  // init SDL
  SDL_Init(SDL_INIT_VIDEO);

  // create window
  SDL_Window* window = SDL_CreateWindow(
    "SDL Square",
    SDL_WINDOWPOS_UNDEFINED,
    SDL_WINDOWPOS_UNDEFINED,
    window_width, window_height,
    SDL_WINDOW_SHOWN
  );

  // create renderer
  SDL_Renderer* renderer = SDL_CreateRenderer(window, -1, 0);

  // draw a black background
  SDL_SetRenderDrawColor(renderer, 0, 0, 0, 0);
  SDL_RenderClear(renderer);

  // create and draw the square
  struct Square square;
  square.red = true;
  square.rect.x = (window_width / 2) - (square_size / 2);
  square.rect.y = (window_height / 2) - (square_size / 2);
  square.rect.w = square_size;
  square.rect.h = square_size;

  draw_square(renderer, &square);

  // display everything
  SDL_RenderPresent(renderer);

  // loop until the user quits
  SDL_Event event;

  while (!quit) {
    SDL_WaitEvent(&event);

    switch (event.type) {
    case SDL_QUIT:
      quit = true;
      break;
    // toggle square color on mouse click
    case SDL_MOUSEBUTTONDOWN:
      square.red = !square.red;
      draw_square(renderer, &square);
      SDL_RenderPresent(renderer);
      break;
    }
  }

  // cleanup before closing
  SDL_DestroyRenderer(renderer);
  SDL_DestroyWindow(window);
  SDL_Quit();

  return 0;
}
