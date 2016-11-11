#include <iostream>
#include <vector>
#include "sstream"
#include "Student.h"
using std::vector;



int main() {
    vector<StudentScore> total;
    for (int i = 0; i < 2; i++) {
        StudentScore current;
        std::string record;

        std::getline(std::cin, record);
        current.set_info_from_record(record);
        total.push_back(current);
    }
    std::cout << "nu  name  score1  score2  score3  average" << std::endl;
    for (auto it = total.begin(); it != total.end(); ++it) {
        (*it).print_result();
    }
    return 0;
}