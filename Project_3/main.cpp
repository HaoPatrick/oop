#include "room.h"
#include <random>
#include <vector>
#include <map>

using std::vector;

int main() {
    PrinceRoom test;
    std::cout << test.action() << std::endl;
    MonsterRoom mon;
    std::cout << mon.action() << std::endl;
    CommonRoom comm;
    std::cout << comm.action() << std::endl;


    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_int_distribution<> dis(0, 2);

    for (int n = 0; n < 10; ++n)
        std::cout << dis(gen) << ' ';

    std::map<std::string, int> direction_map = {
            {"east", 3},
            {"west", -3},
            {"up",   5},
            {"down", -5}
    };
    while (true) {
        std::cout << "Where would you want to go: east, west, up or, emm... down?" << std::endl;
        std::string user_input;
        vector<int> directions;
        std::getline(std::cin, user_input);
        if (direction_map.find(user_input) != direction_map.end()) {
            directions.push_back(direction_map[user_input]);
            dis.reset();
            int random_number = dis(gen);

            if (directions.size() < 5 && random_number == 2) random_number = 0;
            if (random_number == 0) {
                std::cout << "A new room, nothing special!" << std::endl;
            } else if (random_number == 1) {
                std::cout << "You encountered a monster! Game over now..." << std::endl;
                break;
            } else if (random_number == 2){
                std::cout<<"Wow you find the Prince, Game Over~ Bye..."<<std::endl;
            }
        } else {
            std::cout << "You bad guy, we do not provide such direction!" << std::endl;
            break;
        }
    }

    return 0;
}