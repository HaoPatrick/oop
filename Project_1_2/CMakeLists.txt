cmake_minimum_required(VERSION 3.6)
project(oop_1)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp Student.cpp Student.h)
add_executable(oop_1 ${SOURCE_FILES})