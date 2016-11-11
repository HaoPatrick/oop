#include <iostream>
#include <vector>
#include "sstream"
#include "Student.h"

using std::vector;


int main() {
    vector<StudentScore> total_students;
    bool student_end_flag = false;
    while (!student_end_flag) {
        StudentScore current;
        bool course_end_flag = false;
        std::string record;

        std::string this_name;
        std::cout<<"Name please ?"<<std::endl;

        while (!course_end_flag) {
            std::cout << "Course Score (use -1 to end this student):" << std::endl;
            std::getline(std::cin, record);
            course_end_flag = current.set_info_from_record(record);
        }
        current.set_score_average();
        total_students.push_back(current);

        std::cout << "Do you want to add more student?(Y/n)" << std::endl;
        std::string if_add_more_student;
        std::getline(std::cin, if_add_more_student);
        if (if_add_more_student.compare(0, 1, "Y") != 0 &&
            if_add_more_student.compare(0, 1, "") != 0) {
            student_end_flag = true;
        }
    }
    for (auto &student:total_students) {
        student.print_result();
        std::cout << "\n";
    }
//    for (auto it = total_students.begin(); it != total_students.end(); ++it) {
//        (*it).print_result();
//    }
    return 0;
}