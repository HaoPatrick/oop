# Just one line to show the comments

CC = g++
CFLAGS= -c -Wall

all: student_info

student_info:main.o student.o
	$(CC) main.o Student.o -o student_info

main.o: main.cpp
	$(CC) $(CFLAGS) main.cpp

student.o: Student.cpp
	$(CC) $(CFLAGS) Student.cpp

clean:
	rm *o student_info
