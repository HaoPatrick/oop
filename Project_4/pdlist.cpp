//
// Created by Haoxiangpeng on 12/9/2016.
//

#include "dairy.h"

using json = nlohmann::json;

int main() {
    Dairy my_dairy;
    std::cout << my_dairy.list_item(1209, 1211) << std::endl;
    return 0;
}