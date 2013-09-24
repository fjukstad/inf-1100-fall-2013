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


// Based loosely on http://en.wikipedia.org/wiki/Bresenham's_line_algorithm

// Draw a line on the screen from x1,y1 to x2,y2
void DrawLine(SDL_Surface *screen, int x1, int y1, int x2, int y2, unsigned int color)
{
    int deltax = x2 - x1; 
    int deltay = y2 - y1; 

    // Horizontal
    if(deltax == 0){
        int j; 

        for(j = y1; j <= y2; j++){
            SetPixel(screen, x1, j, color); 
        }

    }

    // Vertical
    else if (deltay == 0){
        int i; 
        for(i = x1; i <= x2; i++){
            SetPixel(screen, i, y1,color); 
        }
    }

    // 45 degrees
    else if (deltax == deltay){
        int i; 
        int j = y1; 
        for(i = x1; i <= x2; i++){
            SetPixel(screen,i,j,color); 
            j++;
        }
    }

    else{

    float delta_error = (float) deltay / (float) deltax; 
    float error = 0.0; 
    int y = y1;
    
    int x; 

    for(x = x1; x < x2; x++){
        SetPixel(screen,x,y,color); 
        error = error + delta_error; 
        if(error >= 0.5){
            y++;
            error = error - 1.0; 
        }
    }
    }
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
	
    int width = 300; 
    int height = width; 

    //Create a 1024x768x32 window
    screen = SDL_SetVideoMode(width, height, 32, 0);     
    if (screen == NULL) {
        printf("Unable to get video surface: %s\n", SDL_GetError());    
        exit(1);
    }


    // Example call (horizontal line). Remember to pass screen as first parameter.
    // The SDL_MapRGB function converts a RGB value to
    // a 32-bit value (each color is 8 bit)

    // Horizontal
    DrawLine(screen, 10, 10, 100, 10,
        SDL_MapRGB(screen->format, 0xff, 0, 0));
    
    // Vertical
    DrawLine(screen, 10, 10, 10, 100,
        SDL_MapRGB(screen->format, 0, 0xff, 0));

    // 45 Degrees
    DrawLine(screen, 10, 10, 100, 100,
        SDL_MapRGB(screen->format, 0, 0, 0xff));

    // < 45 degrees
    DrawLine(screen, 10, 10, 100, 60,
        SDL_MapRGB(screen->format, 0xcc, 0xcc, 0xcc));



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
