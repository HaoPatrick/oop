//
// Created by hao on 10/21/16.
//
#include <iostream>
#include <vector>
#include <algorithm>
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
    out_line = std::accumulate(course_and_score_map.begin(), course_and_score_map.end(), out_line,
                               [](std::string pre_result, const std::pair<std::string, int> &kv) {
                                   return pre_result + " " + kv.first + ":" + std::to_string(kv.second);
                               });
    out_line += " " + std::to_string(score_average);
    std::cout << out_line << std::endl;
}


void StudentScore::set_course_map(std::string course, int score) {
    course_and_score_map[course] = score;
}

void StudentScore::set_name(std::string name_) {
    name = name_;
}

void StudentScore::set_score_average() {
    const int total = std::accumulate(course_and_score_map.begin(), course_and_score_map.end(), 0,
                                      [](const int pre_result, const std::pair<std::string, int> &kv) {
                                          return pre_result + kv.second;
                                      });
    score_average = 1.0 * total / course_and_score_map.size();
}