//
// Created by Haoxiangpeng on 12/22/2016.
//

#include "Vector.h"

Vector::Vector() {

}

template <class T>
Vector::Vector(int size) {
    this->m_pElements=new T[size];
}

Vector::Vector(const Vector &r) {

}

Vector::~Vector() {

}

template<class T>
T &Vector::operator[](int index) {
    return this->m_pElements[index];
}

int Vector::size() {
    return m_nSize;
}

int Vector::inflate(int addSize) {
    return m_nSize + addSize;
}