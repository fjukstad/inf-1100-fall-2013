#include <stdlib.h>
#include <stdio.h>
#include <assert.h>
#include "SDL.h"
#include "drawline.h"

// Set pixel x,y on the screen
void SetPixel(SDL_Surface *screen, int x, int y, unsigned int color)
{
    unsigned int *bufp;

    // Verify that pixel is inside of screen
    if (x >= screen->w ||  x < 0 ||
        y >=screen->h || y < 0) {
         printf("Plotting pixel outside of screen\n");
         return;
    }

    // Set pixel
    bufp = (unsigned int*)screen->pixels + y*screen->pitch/4 + x;
    *bufp = color;	
 	
    // Force screen update
    SDL_UpdateRect(screen, x, y, 1, 1);
}

// Draw a line on the screen from x1,y1 to x2,y2
void DrawLine(SDL_Surface *screen, int x1, int y1, int x2, int y2, unsigned int color)
{
    
        // Complete this function

}


int main(int argc, char **argv)
{
    int retval, done, x, y;
    SDL_Surface *screen;
    SDL_Event event;
	
    // Initialize SDL	
    retval = SDL_Init(SDL_INIT_VIDEO);
    if (retval == -1) {
        printf("Unable to initialize SDL\n");
        exit(1);	
    }
	
    //Create a 1024x768x32 window
    screen = SDL_SetVideoMode(1024, 768, 32, 0);     
    if (screen == NULL) {
        printf("Unable to get video surface: %s\n", SDL_GetError());    
        exit(1);
    }

    // Example call (horizontal line). Remember to pass screen as first parameter.
    // The SDL_MapRGB function converts a RGB value to
    // a 32-bit value (each color is 8 bit)
    DrawLine(screen, 10, 10, 100, 10,
        SDL_MapRGB(screen->format, 0xff, 0, 0));


    // Wait for ctrl-c from user
    done = 0;
    while (done == 0) {
        while (SDL_PollEvent(&event)) {
            switch (event.type) {
            case SDL_QUIT:
                done = 1;
                break;	
            }			
        }
    }	
	
    SDL_Quit();

    return 0;
}
