#include <iostream>
#include "json.hpp"

using json = nlohmann::json;

int main() {
    std::cout << "Hello, World!" << std::endl;
    json j;
    j["pi"] = 3.14;
    j["happy"] = true;
    j["name"] = "nihao";
    j["nothing"] = NULL;
    j["list"] = {1, 2, 3, 4};
    j["answer"]["awe"] = 42;
    j["count"]=1;
    j[1]["date"]="aaa";
    j[1]["content"]="asldkfjlasjdf";
    std::string sample = j.dump();
    std::cout << sample << std::endl;
    return 0;
}