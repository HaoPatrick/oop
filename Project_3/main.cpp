#include "room.h"
#include <random>
#include <vector>
#include <map>

#include <chrono>

using std::vector;


void generate_a_random_maze(int *maze);

void print_the_maze(int maze[]);

int main() {
    int maze[9];
    vector<Room> room_maze;
    std::map<std::string, int> direction_map = {
            {"up",    -3},
            {"down",  3},
            {"right", 1},
            {"left",  -1}
    };
    generate_a_random_maze((int *) maze);
    print_the_maze((int *) maze);
    for (int i = 0; i < 9; i++) {
        if (maze[i] == 0) {
            CommonRoom common_room(i,maze[i]);
            room_maze.push_back(common_room);
        } else if (maze[i] == 1) {
            MonsterRoom monster_room(i,maze[i]);
            room_maze.push_back(monster_room);
        } else if (maze[i] == 2) {
            PrinceRoom prince_room(i,maze[i]);
            room_maze.push_back(prince_room);
        } else if (maze[i] == 3) {
            Lobby lobby(i,maze[i]);
            room_maze.push_back(lobby);
        }

    }
    int current_location = 0;
    bool have_found_the_princess=false;
    while (true) {
        Room current_room = room_maze[current_location];

        std::cout << "Hey guy, you current at" << current_room.get_current_location() << "\n";
        if(current_room.room_action()==0){
            std::cout<<"You entered a common room, nothing happened, do you like it?\n";
        }else if(current_room.room_action()==1){
            std::cout<<"Sad boy, you encountered a monster, game over, bye~\n";
            break;
        }else if(current_room.room_action()==2){
            std::cout<<"Hey, you find the princess, now go back to lobby!\n";
            have_found_the_princess=true;
        }else if(current_room.room_action()==3){
            if(have_found_the_princess){
                std::cout<<"You completed the mission. Bye~\n";
                break;
            }else{
                std::cout<<"You go back to the lobby, without your princess\n";
            }
        }
        std::string promote_message="Where would you want to go:";
        if(current_room.can_go_up()) promote_message+=" up";
        if(current_room.can_go_down()) promote_message+=" down";
        if(current_room.can_go_left()) promote_message+=" left";
        if(current_room.can_go_right()) promote_message+=" right";
        promote_message+="?\n";
        std::cout << promote_message << std::endl;
        std::string user_input;
        vector<int> directions;
        std::getline(std::cin, user_input);

        if(direction_map.find(user_input)!=direction_map.end()){
            if(user_input=="up"&&current_room.can_go_up()){
                current_location+=direction_map.at(user_input);
            }else if(user_input=="down"&&current_room.can_go_down()){

                current_location+=direction_map.at(user_input);
            }else if(user_input=="right"&&current_room.can_go_right()){

                current_location+=direction_map.at(user_input);
            }else if(user_input=="left"&&current_room.can_go_left()){

                current_location+=direction_map.at(user_input);
            }
        }
        std::cout<<current_room.room_action()<<std::endl;
    }

    return 0;
}

void generate_a_random_maze(int *maze) {
    std::mt19937 rng;
    rng.seed(std::random_device()());
    std::uniform_int_distribution<std::mt19937::result_type> dist(1, 8);
    for (int i = 0; i < 9; i++) {
        maze[i] = 0;
    }
    maze[dist(rng)] = 1;
    maze[dist(rng)] = 1;
    maze[dist(rng)] = 2;
    maze[0] = 3;
}

void print_the_maze(int maze[]) {
    for (int i = 0; i < 9; i++) {
        std::cout << maze[i] << " ";
    }
    std::cout << std::endl;
}