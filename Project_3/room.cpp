//
// Created by Haoxiangpeng on 11/25/2016.
//

#include "room.h"



Room::Room() {
    this->down = 0;
    this->left = 0;
    this->right = 0;
    this->up = 0;
}

Room::Room(int i,int type) {
    this->left = i % 3 > 0;
    this->right = i % 3 < 2;
    this->up = i / 3 > 0;
    this->down = i / 3 < 2;
    this->location = i;
    this->room_type=type;
}

