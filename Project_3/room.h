//
// Created by Haoxiangpeng on 11/25/2016.
//
#include <iostream>

#ifndef PROJECT_3_ROOM_H
#define PROJECT_3_ROOM_H

class Room {
public:
    virtual auto action()->int;

    Room(int i);

    Room();

    inline auto can_go_up() -> bool { return up; };

    inline auto can_go_down() -> bool { return down; };

    inline auto can_go_left() -> bool { return left; };

    inline auto can_go_right() -> bool { return right; };

    inline auto get_current_location() -> std::string {
        std::string location_string = "(";
        location_string += std::to_string(location / 3);
        location_string += ",";
        location_string += std::to_string(location % 3);
        location_string += ")";
        return location_string;
    };

protected:
    std::string room_message;
    bool up;
    bool down;
    bool right;
    bool left;
    int location;
};

class PrinceRoom : public Room {
public:
    inline PrinceRoom() {
        std::cout << room_message << std::endl;
    }

    using Room::Room;

    bool action();

protected:
    const std::string room_message = "Congratulations to the Prince Room!";
};

class MonsterRoom : public Room {
public:
    inline MonsterRoom() {
        std::cout << room_message << std::endl;
    }

    using Room::Room;

    bool action();

protected:
    const std::string room_message = "You encountered a monster!";

};

class CommonRoom : public Room {
public:
    inline CommonRoom() {
        std::cout << room_message << std::endl;
    }

    using Room::Room;

    bool action();

protected:
    const std::string room_message = "A new room, nothing special!";

};

class Lobby : public Room {
public:
    inline Lobby() {
        std::cout << room_message << std::endl;
    }

    bool action();

    using Room::Room;

protected:
    const std::string room_message = "You encountered a monster!";

};


#endif //PROJECT_3_ROOM_H
