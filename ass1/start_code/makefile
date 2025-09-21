CC = g++
CXXFLAGS = -std=c++17 -lGL -lglfw -lGLEW -lnanogui 

all: main

debug: CXXFLAGS += -DDEBUG -g
debug: main

main: src/main.o src/Renderer.o src/Animation.o
	$(CC) $(CXXFLAGS) src/build/main.o src/build/Renderer.o src/build/Animation.o -o main

main.o: src/main.cpp src/Renderer.h
	mkdir -p src/build
	$(CC) $(CXXFLAGS) -c src/main.cpp -o src/build/main.o

Renderer.o: src/Renderer.cpp src/Renderer.h
	$(CC) $(CXXFLAGS) -c src/Renderer.cpp -o src/build/Renderer.o

Animation.o: Animation.cpp Animation.h
	$(CC) $(CXXFLAGS) -c src/Animation.cpp -o src/build/Animation.o

.PHONY: clean
clean:
	rm -rf src/build
	rm -r src/main