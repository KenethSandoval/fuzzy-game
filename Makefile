CXXFLAGS=-Wall -Wextra -std=c++17 -pedantic -fno-exceptions `pkg-config --cflags sdl2`
LIBS=`pkg-config --libs sdl2`

game: src/game.cpp
	$(CXX) $(CXXFLAGS) -I./src/ -o game src/game.cpp $(LIBS)
