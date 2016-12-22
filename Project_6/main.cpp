#include <iostream>
#include "Vector.h"


int main() {
    Vector<int> test_int(7);
    std::cout << test_int.size() << std::endl;

    test_int.m_pElements[0] = 23;
    test_int.m_pElements[1] = 3;
    test_int.m_pElements[2] = 5;
    test_int.m_pElements[3] = 3;
    test_int.m_pElements[6] = 2343;

    Vector<int> test_int2;
    std::cout << test_int2.size() << std::endl;

    test_int2 = test_int;
    std::cout << test_int2[6] << std::endl;

    std::cout << test_int2.inflate(10) << std::endl;
    std::cout << test_int2[7] << std::endl;


    Vector<std::string> test_string;


    std::cout << test_int2[17] << std::endl;

}