//
// Created by Haoxiangpeng on 12/1/2016.
//

#include "maze.h"
#include <random>
#include <iostream>

Maze::Maze() {
    this->direction_map = {
            {"up",    -3},
            {"down",  3},
            {"right", 1},
            {"left",  -1}
    };
    this->generate_a_random_maze(this->maze);
}

void Maze::generate_a_random_maze(int *maze) {
    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_int_distribution<std::mt19937::result_type> dist(1, 8);
    for (int i = 0; i < 9; i++) {
        maze[i] = 0;
        std::cout << dist(gen) << " ";
    }
    std::cout << std::endl;
    maze[dist(gen)] = 1;
    maze[dist(gen)] = 1;
    maze[dist(gen)] = 2;
    maze[0] = 3;
}