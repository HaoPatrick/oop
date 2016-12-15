//
// Created by Haoxiangpeng on 12/15/2016.
//

#pragma once

#include <iostream>
#include <string>


class Fraction {
public:
    Fraction();

    Fraction(int Num, int Den);

    Fraction(const Fraction &);

    auto to_double() const -> double { return 1.0 * this->Num / this->Den; }

    auto to_string() const -> std::string {
        return std::to_string(this->Num) + " / " + std::to_string(this->Den);
    }

    Fraction operator+(const Fraction &);

    Fraction operator-(const Fraction &);

    Fraction operator*(const Fraction &);

    Fraction operator/(const Fraction &);

    bool operator<(const Fraction &);

    bool operator<=(const Fraction &);

    bool operator==(const Fraction &);

    bool operator!=(const Fraction &);

    bool operator>=(const Fraction &);

    bool operator>(const Fraction &);

    friend std::ostream &operator<<(std::ostream &Out, const Fraction &obj) {
        Out << obj.to_string();
        return Out;
    };

    friend std::istream &operator>>(std::istream &In, Fraction &obj) {
        In >> obj.Num >> obj.Den;
        return In;
    }

protected:
    int Num;
    int Den;

    int gcd(int a, int b);

    void set_value(int num, int den) {
        this->Num = num;
        this->Den = den;
    }

    void simplify_and_set(int num, int den);

    std::tuple<int, int> simplify(int num, int den);
};





//PROJECT_5_FRACTION_H
