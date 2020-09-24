#include <stdbool.h>
#include<SDL.h>

int main ()
{
    // Init SDL
    SDL_Init(SDL_INIT_VIDEO);

    // Create window
    SDL_Window* window = SDL_CreateWindow(
        "SDL Square",
        SDL_WINDOWPOS_UNDEFINED,
        SDL_WINDOWPOS_UNDEFINED,
        800, 600,
        SDL_WINDOW_SHOWN
    );

    // Create renderer
    SDL_Renderer* renderer = SDL_CreateRenderer(window, -1, 0);

    // Draw a black background
    SDL_SetRenderDrawColor(renderer, 0, 0, 0, 0);
    SDL_RenderClear(renderer);

    // Draw the red square
    SDL_Rect rect;
    rect.x = 400 - 128;
    rect.y = 300 - 128;
    rect.w = 256;
    rect.h = 256;

    SDL_SetRenderDrawColor(renderer, 255, 0, 0, 255);
    SDL_RenderFillRect(renderer, &rect);

    // Display everything
    SDL_RenderPresent(renderer);


    // Loop until user quits
    SDL_Event event;

    while (true)
    {
        SDL_WaitEvent(&event);

        if (event.type == SDL_QUIT)
        {
            break;
        }

    }

    // Cleanup before closing
    SDL_DestroyRenderer(renderer);
    SDL_DestroyWindow(window);
    SDL_Quit();

    return 1;
}