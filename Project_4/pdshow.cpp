#include "dairy.h"


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
    std::string result = my_dairy.list_item(date_time);
    std::cout<<result<<std::endl;
    return 0;
}
