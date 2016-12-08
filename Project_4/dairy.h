#pragma once
#include "json.hpp"


class Dairy {
public:

    auto count() -> int { return this->dairy_count; }

    Dairy();

    int add_a_new_item(std::string date, std::string content);

    int save();

    std::string list_all_item() ;

protected:

    int dairy_count;

    nlohmann::json dairy_data;
};