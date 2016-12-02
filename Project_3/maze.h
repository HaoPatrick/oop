//
// Created by Haoxiangpeng on 12/1/2016.
//

#pragma once
#include <map>
#include <string>

class Maze{
public:
    Maze();
    std::map<std::string, int> direction_map;
    int maze[9];

    virtual void print_the_map() final ;

private:

    void generate_a_random_maze(int *maze);
};
 //PROJECT_3_MAZE_H
