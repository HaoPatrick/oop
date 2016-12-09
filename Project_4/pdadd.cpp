#include "dairy.h"

using json = nlohmann::json;

int main(int argc,char **argv) {
    Dairy my_dairy;
    my_dairy.add_a_new_item(1209, "backend test");
    my_dairy.save();
    return 0;
}