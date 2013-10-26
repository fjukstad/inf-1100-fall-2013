
# Uncomment the line below if you are using Linux
# SDL_LIB = -lSDL

# Uncomment the line below if you are using Mac
# SDL_LIB = `sdl-config --cflags --libs`

# Comment the line below if you are using Linux
# SDL_LIB = SDL.dll

SOURCE = main.c

all: app


app: $(SOURCE)
	gcc -Wall -o $@ $(SOURCE)

clean:
	rm -f *.o *.exe app *~

