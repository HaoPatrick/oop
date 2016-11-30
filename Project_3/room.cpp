//
// Created by Haoxiangpeng on 11/25/2016.
//

#include "room.h"

bool Room::action() {
    return false;
}

Room::Room() {
    this->down = 0;
    this->left = 0;
    this->right = 0;
    this->up = 0;
}

Room::Room(int i) {
    this->left = i % 3 > 0;
    this->right = i % 3 < 2;
    this->up = i / 3 > 0;
    this->down = i / 3 < 2;
    this->location=i;
}

bool PrinceRoom::action() {
    return 1;
}

bool MonsterRoom::action() {
    return 2;
}

bool CommonRoom::action() {
    return 3;
}

bool Lobby::action() {
    return 3;
}