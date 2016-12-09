cmake_minimum_required(VERSION 3.6)
project(Project_4)

set(CMAKE_CXX_STANDARD 11)

set(PDADD pdadd.cpp dairy.cpp dairy.h)

set(PDSHOW pdshow.cpp dairy.h dairy.cpp)
set(PDREMOVE pdremove.cpp dairy.h dairy.cpp)
set(PDLIST pdlist.cpp dairy.h dairy.cpp)

add_executable(pdshow ${PDSHOW})
add_executable(pdadd ${PDADD})
add_executable(pdremove ${PDREMOVE})
add_executable(pdlist ${PDLIST})