//
// Created by Haoxiangpeng on 12/1/2016.
//

#include "maze.h"
#include <random>
#include <iostream>
#include <string>

Maze::Maze() {
    this->direction_map = {
            {"up",    -3},
            {"down",  3},
            {"right", 1},
            {"left",  -1},
            {"help",0}
    };
    this->generate_a_random_maze(this->maze);
}

void Maze::generate_a_random_maze(int *maze) {
    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_int_distribution<std::mt19937::result_type> dist(1, 8);
    for (int i = 0; i < 9; i++) {
        maze[i] = 0;
    }
    std::cout << std::endl;
    maze[dist(gen)] = 1;
    maze[dist(gen)] = 1;
    maze[dist(gen)] = 2;
    maze[0] = 3;
}

void Maze::print_the_map() {
    std::map<int, std::string> int_to_map = {
            {0, " "},
            {1, "M"},
            {2, "P"},
            {3, "L"}
    };
    std::string first = "=================\n";
    std::string two = "== " + int_to_map.at(this->maze[0]) + " == " + int_to_map.at(this->maze[1]) + " == " +
                      int_to_map.at(this->maze[2]) + " ==";
    std::cout << first << two << "\n" << first;

    two = "== " + int_to_map.at(this->maze[3]) + " == " + int_to_map.at(this->maze[4]) + " == " +
          int_to_map.at(this->maze[5]) + " ==";
    std::cout << two << "\n" << first;

    two = "== " + int_to_map.at(this->maze[6]) + " == " + int_to_map.at(this->maze[7]) + " == " +
          int_to_map.at(this->maze[8]) + " ==";
    std::cout << two << "\n" << first;

}
