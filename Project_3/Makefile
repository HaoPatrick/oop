# Just one line to show the comments

CC = g++
CFLAGS= -c -Wall -std=c++11

all: all_maze

all_maze:main.o maze.o room.o
	$(CC) main.o maze.o room.o -o all_maze

main.o: main.cpp
	$(CC) $(CFLAGS) main.cpp

room.o: room.cpp
	$(CC) $(CFLAGS) room.cpp

maze.o: maze.cpp
	$(CC) $(CFLAGS) maze.cpp
clean:
	rm -f ./*.o
