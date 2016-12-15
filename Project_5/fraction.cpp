//
// Created by Haoxiangpeng on 12/15/2016.
//

#include <stdexcept>
#include <tuple>
#include "fraction.h"


Fraction::Fraction() {
    set_value(1, 1);
}

Fraction::Fraction(int Num, int Den) {
    if (Den == 0) {
        throw std::invalid_argument("Invalid Parameter");
    }
    simplify_and_set(Num, Den);
}

Fraction::Fraction(const Fraction &obj) {
    this->Den = obj.Den;
    this->Num = obj.Num;
}

void Fraction::simplify_and_set(int num, int den) {
    int greatest_common_d = gcd(num, den);
    set_value(num / greatest_common_d, den / greatest_common_d);
}


Fraction Fraction::operator*(const Fraction &obj) {
    return Fraction(this->Num * obj.Num, this->Den * obj.Den);
}

Fraction Fraction::operator+(const Fraction &obj) {
    return Fraction(
            this->Num * obj.Den + this->Den * obj.Num,
            this->Den * obj.Den
    );
}

Fraction Fraction::operator-(const Fraction &obj) {
    return Fraction(this->Num * obj.Den - this->Den * obj.Num,
                    this->Den * obj.Den);
}

Fraction Fraction::operator/(const Fraction &obj) {
    return Fraction(this->Num * obj.Den, this->Den * obj.Num);
}


// We can not simply compare the to_double value
bool Fraction::operator!=(const Fraction &obj) {
    int fra_den, fra_num, obj_num, obj_den;
    std::tie(fra_num, fra_den) = simplify(this->Num, this->Den);
    std::tie(obj_num, obj_den) = simplify(obj.Num, obj.Den);
    return (fra_num != obj_num) || (fra_den != obj_den);
}

bool Fraction::operator==(const Fraction &obj) {
    int fra_den, fra_num, obj_num, obj_den;
    std::tie(fra_num, fra_den) = simplify(this->Num, this->Den);
    std::tie(obj_num, obj_den) = simplify(obj.Num, obj.Den);
    return (fra_num == obj_num) && (fra_den == obj_den);
}

bool Fraction::operator<(const Fraction &obj) {
    return this->Num * obj.Num < this->Den * obj.Num;
}

bool Fraction::operator<=(const Fraction &obj) {
    return this->Num * obj.Num <= this->Den * obj.Num;
}

bool Fraction::operator>(const Fraction &obj) {
    return this->Num * obj.Num > this->Den * obj.Num;
}

bool Fraction::operator>=(const Fraction &obj) {
    return this->Num * obj.Num >= this->Den * obj.Num;
}

std::tuple<int, int> Fraction::simplify(int num, int den) {
    int temp_gcd = gcd(num, den);
    return std::make_tuple(num / temp_gcd, den / temp_gcd);
}




int Fraction::gcd(int a, int b) {
    if (b == 0)
        return a;
    return gcd(b, a % b);
}
