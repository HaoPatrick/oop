//
// Created by hao on 10/21/16.
//
#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include "sstream"
#include "Student.h"

using std::vector;


bool StudentScore::set_info_from_record(std::string record_info) {
    vector<std::string> records = split(record_info, ' ');
    auto one_record = records.begin();
    try {
        if (*one_record == "-1") {
            return true;
        }
        std::string course_name = *one_record;
        one_record++;
        int course_score = std::stoi(*one_record);
        set_course_map(course_name, course_score);
    }
    catch (std::exception const &e) {
        return true;
    }
    return false;
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
    std::string out_line(name);
    out_line = out_line + " ";
    for (const auto &kv:course_and_score_map) {
        out_line += " " + kv.first + ":" + std::to_string(kv.second) + " ";
    }
    out_line += std::to_string(score_average);
    std::cout << out_line << std::endl;
}


void StudentScore::set_score_average(void) {
    int score_all = 0;
    for (const auto &kv: course_and_score_map) {
        score_all += kv.second;
    }
    score_average = 1.0 * score_all / course_and_score_map.size();
}

void StudentScore::set_course_map(std::string course, int score) {
    course_and_score_map[course] = score;
}

void StudentScore::set_name(std::string name_) {
    name = name_;
}