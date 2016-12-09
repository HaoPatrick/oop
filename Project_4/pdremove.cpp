//
// Created by Haoxiangpeng on 12/9/2016.
//

#include "dairy.h"

using json = nlohmann::json;

int main() {
    Dairy my_dairy;
    my_dairy.delete_item(1215);
//    std::cout << my_dairy.list_item() << std::endl;
    return 0;
}