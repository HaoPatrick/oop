#include "dairy.h"

using json = nlohmann::json;

int main(int argc, char **argv) {
    std::string::size_type sz;
//    for(int i=0;i<argc;i++){
//        std::cout<<argv[i]<<std::endl;
//    }
    int date_time;
    std::string dairy_content;
    try {
        date_time = std::stoi(argv[1]);
        if (argc < 3) {
            throw "Bad input number! pdadd date content content...";
        }
        for (int i = 1; i < argc; i++) {
            dairy_content.append(argv[i]);
            dairy_content.append(" ");
        }
    }
    catch (std::invalid_argument) {
        std::cout << "Invalid date time,\nFor example, Dec 9th should be 1209" << std::endl;
        return 1;
    }
    catch (const char *msg) {
        std::cout << msg << std::endl;
        return 1;
    }


    Dairy my_dairy;
    my_dairy.add_a_new_item(date_time, dairy_content);
    my_dairy.save();
    return 0;
}