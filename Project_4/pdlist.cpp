//
// Created by Haoxiangpeng on 12/9/2016.
//

#include "dairy.h"

using json = nlohmann::json;

int main(int argc, char **argv) {
    int start_date, end_date;
    try {
        if (argc != 3) {
            throw "Invalid input number, pdlist start_date end_date";
        }
        start_date = std::stoi(argv[1]);
        end_date = std::stoi(argv[2]);
        if (start_date > end_date) {
            throw "Invalid date range";
        }
    } catch (const char *msg) {
        std::cout << msg << std::endl;
        return 1;
    } catch (std::invalid_argument) {
        std::cout << "Invalid datetime\nFor example Dec 9th: 1209" << std::endl;
        return 1;
    }
    Dairy my_dairy;
    std::cout << my_dairy.list_item(start_date, end_date) << std::endl;
    return 0;
}