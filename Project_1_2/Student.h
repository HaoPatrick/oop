//
// Created by hao on 10/21/16.
//
#include <iostream>
#include <vector>
#include <map>
#include <string>

using std::vector;
#ifndef OOP_1_STUDENT_H
#define OOP_1_STUDENT_H

class StudentScore {
public:
    bool set_info_from_record(std::string record_info);

    void set_name(std::string name_);

    void print_result(void);

    void set_course_map(std::string, int);

    void set_score_average(void);


private:
    std::string name;
    double score_average;


    std::map<std::string, int> course_and_score_map;

    vector<std::string> split(const std::string s, char delim);
};

#endif //OOP_1_STUDENT_H
