//
// Created by hao on 10/21/16.
//
#include <iostream>
#include <vector>
using std::vector;
#ifndef OOP_1_STUDENT_H
#define OOP_1_STUDENT_H

class StudentScore {
public:
    void set_info_from_record(std::string record_info);

    void set_score_one(int score);

    void set_score_two(int score);

    void set_score_three(int score);

    void set_num(int num);

    void set_name(std::string name_);

    void print_result(void);

private:
    int num;
    std::string name;
    int score_one;
    int score_two;
    int score_three;
    double score_average;

    void set_score_average(void);

    vector<std::string> split(const std::string s, char delim);
};
#endif //OOP_1_STUDENT_H
