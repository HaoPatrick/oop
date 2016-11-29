//
// Created by Haoxiangpeng on 11/25/2016.
//

#include "room.h"

int Room::action() {
    return 0;
}

int PrinceRoom::action() {
    return 1;
}

int MonsterRoom::action() {
    return 2;
}

int CommonRoom::action() {
    return 3;
}