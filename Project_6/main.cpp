#include <iostream>
#include "Vector.h"


int main() {
    Vector<int> test_int(7);
    std::cout << test_int.size() << std::endl;
    test_int.set_value(234, 1);
    test_int.set_value(622, 6);

    Vector<int> test_int2;
    std::cout << test_int2.size() << std::endl;

    test_int2 = test_int;
    std::cout << test_int2[6] << std::endl;

    std::cout << test_int2.inflate(10) << std::endl;
    std::cout << test_int2[7] << std::endl;


    Vector<std::string> test_string(5);
    test_string.set_value("c++", 1);
    std::cout << test_string[1] << std::endl;

    std::cout << test_int2[17] << std::endl;

}