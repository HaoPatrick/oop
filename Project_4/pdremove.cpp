//
// Created by Haoxiangpeng on 12/9/2016.
//

#include "dairy.h"

using json = nlohmann::json;

int main(int argc, char **argv) {
    int date_time;
    try {
        if (argc != 2) {
            throw "Invalid input number, pdshow date_time";
        }
        date_time = std::stoi(argv[1]);

    } catch (const char *msg) {
        std::cout << msg << std::endl;
        return 1;
    } catch (std::invalid_argument) {
        std::cout << "Invalid datetime\nFor example Dec 9th: 1209" << std::endl;
        return 1;
    }
    Dairy my_dairy;
    my_dairy.delete_item(date_time);

    return 0;
}