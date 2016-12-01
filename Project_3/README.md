Project 2 - Maze
====

Use two kind of class: 

1. Room    

    * Lobby

    * Common Room

    * Monster Room

    * Princess Room

2. Maze - to generate a maze


Main Features
-----

1. Using C++ 11, only compiles and tested in C++

2. Using ` #pragma once ` instead of tradition ` #ifndef ` 

3. Using `std::random_device` to generate random numbers, however, this feature

only works in Linux environment. Explained in the [CPP reference](http://en.cppreference.com/w/cpp/numeric/random/random_device/random_device).

> std::random_device may be implemented in terms of an implementation-defined pseudo-random number engine if a non-deterministic source (e.g. a hardware device) is not available to the implementation. In this case each std::random_device object may generate the same number sequence.
