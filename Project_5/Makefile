# Just one line to show the comments

CC = g++
CFLAGS= -c -Wall -std=c++11

all: fraction_hxp

fraction_hxp:main.o fraction.o
	$(CC) main.o fraction.o -o fraction_hxp

main.o: main.cpp
	$(CC) $(CFLAGS) main.cpp

fraction.o: fraction.cpp
	$(CC) $(CFLAGS) fraction.cpp

clean:
	rm *.o
