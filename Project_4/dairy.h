#pragma once

#include "json.hpp"


class Dairy {
public:

    auto count() -> int { return this->dairy_count; }

    Dairy();

    int add_a_new_item(int date, std::string content);

    int save();

    int delete_item(int date);

    std::string list_item(int);

    std::string list_item(int start, int end);

protected:

    int dairy_count;

    nlohmann::json dairy_data;
};