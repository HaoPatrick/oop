//
// Created by Haoxiangpeng on 11/25/2016.
//
#include <iostream>

#ifndef PROJECT_3_ROOM_H
#define PROJECT_3_ROOM_H

class Room {
public:
    virtual int action();

protected:
    const std::string room_message;
};

class PrinceRoom : public Room {
public:
    inline PrinceRoom() {
        std::cout << room_message << std::endl;
    }

    int action();

protected:
    const std::string room_message = "Congratulations to the Prince Room!";
};

class MonsterRoom : public Room {
public:
    inline MonsterRoom() {
        std::cout << room_message << std::endl;
    }

    int action();

protected:
    const std::string room_message = "You encountered a monster!";

};

class CommonRoom : public Room {
public:
    inline CommonRoom() {
        std::cout << room_message << std::endl;
    }

    int action();

protected:
    const std::string room_message = "A new room, nothing special!";

};

#endif //PROJECT_3_ROOM_H
