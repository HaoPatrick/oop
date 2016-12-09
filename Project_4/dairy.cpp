//
// Created by Haoxiangpeng on 12/7/2016.
//
#include "dairy.h"
#include <fstream>


using json=nlohmann::json;

Dairy::Dairy() {
    std::ifstream infile("dairy.dat");
    json json_data;
    infile >> json_data;
    this->dairy_data = json_data;
    if (json_data["count"] == NULL)
        json_data["count"] = 0;

    this->dairy_count = json_data["count"];

    infile.close();
}

int Dairy::add_a_new_item(std::string date, std::string content) {
    bool found_flag = false;
    for (int i = 1; i <= this->count(); i++) {
//        std::cout<<dairy_data[std::to_string(i)]["date"]<<" | "<<date<<" | "<<(dairy_data[std::to_string(i)]["date"]==date)<<std::endl;
        if (this->dairy_data[std::to_string(i)]["date"] == date) {
            found_flag = true;
            this->dairy_data[std::to_string(i)]["content"] = content;
            break;
        }
    }
    if (!found_flag) {
        this->dairy_data[std::to_string(this->count() + 1)]["date"] = date;
        this->dairy_data[std::to_string(this->count() + 1)]["content"] = content;
        this->dairy_data["count"] = this->count() + 1;
    }
    return 0;
}

int Dairy::save() {
    std::ofstream outfile("dairy.dat");
//    outfile.open("dairy.dat");
    outfile << this->dairy_data<< std::endl;
    outfile.close();
    return 1;
}

std::string Dairy::list_all_item() {
    std::string result("");
    for (int i = 0; i < this->dairy_count; i++) {
        result.append("Date");
        result.append(this->dairy_data[i]["date"]);
        result.append("\nContent:");
        result.append(this->dairy_data[i]["content"]);
        result.append("\n");
    }
    return result;
}