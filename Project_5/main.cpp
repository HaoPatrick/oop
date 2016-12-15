#include <iostream>
#include "fraction.h"

int main() {
    std::cout << "======= Fraction for Humans =======" << std::endl;
    Fraction one_second(1, 2);
    Fraction four_eighths(4, 8);
    Fraction three_fourths(3, 4);
    Fraction for_nerd;

    std::cout << one_second << std::endl;
    std::cout << (one_second + three_fourths) << std::endl;
    std::cout << (four_eighths * three_fourths) << std::endl;
    std::cout << (four_eighths * three_fourths).to_double() << std::endl;
    std::cout << (one_second == four_eighths) << std::endl;
    std::cout << (three_fourths > one_second) << std::endl;

    std::cin >> for_nerd;
    std::cout << for_nerd << std::endl;
    return 0;
}