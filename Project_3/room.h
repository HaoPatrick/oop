//
// Created by Haoxiangpeng on 11/25/2016.
//
#pragma once

#include <iostream>


class Room {
public:

    virtual auto room_action() -> int { return this->room_type; };

    Room(int i, int type);

    Room();

    virtual inline auto can_go_up() -> bool final { return up; };

    virtual inline auto can_go_down() -> bool final { return down; };

    virtual inline auto can_go_left() -> bool final { return left; };

    virtual inline auto can_go_right() -> bool final { return right; };

    virtual inline auto get_current_location() -> std::string final {
        std::string location_string = "(";
        location_string += std::to_string(location / 3);
        location_string += ",";
        location_string += std::to_string(location % 3);
        location_string += ")";
        return location_string;
    };

protected:
    bool up;
    bool down;
    bool right;
    bool left;
    int location;
    int room_type = 0;
};

class PrinceRoom : public Room {
public:
    inline PrinceRoom() {
        std::cout << room_message << std::endl;
    }

    using Room::Room;

    auto room_action() -> int override { return this->room_type; };


protected:
    const std::string room_message = "Congratulations to the Prince Room!";
};

class MonsterRoom : public Room {
public:
    using Room::Room;

    auto room_action() -> int override { return this->room_type; };

};

class CommonRoom : public Room {
public:
    using Room::Room;

    auto room_action() -> int override { return this->room_type; };
};

class Lobby : public Room {
public:

    auto room_action() -> int override { return this->room_type; };

    using Room::Room;

};

//PROJECT_3_ROOM_H
