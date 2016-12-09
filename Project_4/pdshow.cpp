#include <iostream>
#include "dairy.h"


int main() {
    Dairy my_dairy;
    my_dairy.add_a_new_item("12/12", "testaklajsdsd");
    my_dairy.add_a_new_item("12/9", "aaa");
    my_dairy.save();
    return 0;
}
