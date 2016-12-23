# Just one line to show the comments

CC = g++
CFLAGS= -c -Wall -std=c++11

all: MyVector

MyVector:main.o Vector.o
	$(CC) main.o Vector.o -o MyVector

main.o: main.cpp
	$(CC) $(CFLAGS) main.cpp

Vector.o: Vector.cpp
	$(CC) $(CFLAGS) Vector.cpp

clean:
	rm *.o
