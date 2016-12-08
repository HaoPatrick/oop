//
// Created by Haoxiangpeng on 12/7/2016.
//
#include "dairy.h"
#include <fstream>


using json=nlohmann::json;

Dairy::Dairy() {
    std::ifstream infile;
    infile.open("dairy.dat");
    std::string read_data;
    infile >> read_data;
    auto json_data = nlohmann::json::parse(read_data);
    this->dairy_data = json_data;
    if (json_data["count"] == NULL)
        json_data["count"] = 0;

    this->dairy_count = json_data["count"];

    infile.close();
}

int Dairy::add_a_new_item(std::string date, std::string content) {
    bool found_flag = false;
    for (int i = 0; i < this->count(); i++) {
        if (this->dairy_data[i]["date"] == date) {
            found_flag = true;
            this->dairy_data[i]["content"] = content;
            break;
        }
    }
    if (!found_flag) {
        this->dairy_data[this->count() + 1]["date"] = date;
        this->dairy_data[this->count() + 1]["content"] = content;
    }
    return 0;
}

int Dairy::save() {
    std::ofstream outfile;
    outfile.open("dairy.dat");
    outfile << this->dairy_data.dump() << std::endl;
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