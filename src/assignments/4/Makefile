
SDKROOT = $(shell uname)

# Mac
ifeq ($(SDKROOT), Darwin)
	SDL_LIB = `sdl-config --cflags --libs`
	COPYCMD = 
	SDLCMD = $(SDL_LIB)
endif

# Linux
ifeq ($(SDKROOT), Linux)
	SDL_LIB = -lSDL
	COPYCMD = 
	SDLCMD = $(SDL_LIB)
endif

# Windows 
ifeq ($(SDKROOT), Cygwin)
	# Switch the 32 and 64.dll depending on 32 or 64-bit cygwin.
	SDL_LIB = SDL32.dll
	#SDL_LIB = SDL64.dll
	COPYCMD = cp $(SDL_LIB) SDL.dll
	SDLCMD = SDL.dll
endif

SOURCE = main.c triangle.c drawline.c
HEADER = drawline.h triangle.h teapot_data.h

all: app

app: $(SOURCE) $(HEADER)
	$(COPYCMD)
	gcc -Wall -o $@ -Iinclude $(SOURCE) $(SDLCMD)


clean:
	rm -f *.o *.exe app *~
