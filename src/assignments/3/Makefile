
# Uncomment the line below if you are using Mac OS X
#SDL_LIB = `sdl-config --cflags --libs`

# Uncomment the line below if you are using Linux
#SDL_LIB = -lSDL

# Comment the line below if you are using Linux/Mac OS X
SDL_LIB = SDL.dll



SOURCE = drawline.c

all: app

app: $(SOURCE)
	gcc -Wall -o $@ -Iinclude $(SOURCE) $(SDL_LIB)

clean:
	rm -f *.o *.exe app *~