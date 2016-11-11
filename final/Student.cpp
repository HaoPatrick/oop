//
// Created by hao on 10/21/16.
//
#include <iostream>
#include <vector>
#include "sstream"
#include "Student.h"

using std::vector;


void StudentScore::set_info_from_record(std::string record_info) {
    vector<std::string> records = split(record_info, ' ');
    auto one_record = records.begin();
    try {
        set_num(std::stoi(*one_record));
        one_record++;
        set_name(*one_record);
        one_record++;
        set_score_one(std::stoi(*one_record));
        one_record++;
        set_score_two(std::stoi(*one_record));
        one_record++;
        set_score_three(std::stoi(*one_record));
        set_score_average();
    }
    catch (std::exception const &e) {
        return;
    }
}

vector<std::string> StudentScore::split(const std::string s_s, char delim) {
    std::stringstream ss(s_s);
    std::string item;
    vector<std::string> tokens;
    while (std::getline(ss, item, delim)) {
        tokens.push_back(item);
    }
    return tokens;
}


void StudentScore::print_result(void) {
    std::cout << num << "   " << name << "   " << score_one << "  " << score_two << "    " << score_three << "   "
              << score_average << std::endl;
}

void StudentScore::set_name(std::string name_) {
    name = name_;
}


void StudentScore::set_score_one(int score) {
    score_one = score;
}

void StudentScore::set_score_two(int score) {
    score_two = score;
}

void StudentScore::set_score_three(int score) {
    score_three = score;
}

void StudentScore::set_num(int num_) {
    num = num_;
}

void StudentScore::set_score_average(void) {
    if (score_one && score_two && score_three)
        score_average = ((score_one + score_two + score_three) / 3.0);
    else
        score_average = 0;
}