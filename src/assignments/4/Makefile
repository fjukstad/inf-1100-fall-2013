
# Uncomment the line below if you are using Mac OS X
#SDL_LIB = `sdl-config --cflags --libs`

# Uncomment the line below if you are using Linux
#SDL_LIB = -lSDL

# Comment the line below if you are using Linux/Mac OS X
SDL_LIB = SDL32.dll
#SDL_LIB = SDL64.dll


SOURCE = main.c triangle.c drawline.c
HEADER = drawline.h triangle.h teapot_data.h

all: app

app: $(SOURCE) $(HEADER)
	cp $(SDL_LIB) SDL.dll
	gcc -Wall -o $@ -Iinclude $(SOURCE) SDL.dll

clean:
	rm -f *.o *.exe app *~