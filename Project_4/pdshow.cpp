#include "dairy.h"


int main() {
    Dairy my_dairy;
    std::string result = my_dairy.list_item(1210);
    std::cout<<result<<std::endl;
    return 0;
}
