//
// Created by Haoxiangpeng on 12/22/2016.
//

#include "Vector.h"


template<class T>
Vector<T>::Vector() {
    this->m_nSize = 0;
    this->m_pElements = new T;
}

template<class T>
Vector<T>::Vector(int size) {
    this->m_pElements = new T[size];
    this->m_nSize = 7;
}

template<class T>
Vector<T>::Vector(const Vector &r) {
    this->m_nSize = r.m_nSize;
    m_pElements = new T[r.size()];
    *m_pElements = *r.m_pElements;
}

template<class T>
Vector<T>::~Vector() {
    delete m_pElements;
}

template<class T>
T &Vector<T>::operator[](int index) {
    if (index >= this->m_nSize || index < 0)
        throw IndexOutofBounds();
    return this->m_pElements[index];
}

template<class T>
int Vector<T>::size() const {
    return m_nSize;
}

template<class T>
int Vector<T>::inflate(int addSize) {
    this->m_nSize += addSize;
    T *temp = new T[this->m_nSize];
    *temp = *this->m_pElements;
    this->m_pElements = temp;
    return this->m_nSize;
}

template<class T>
void Vector<T>::set_value(T value, int index) {
    if (index >= this->m_nSize || index < 0) {
        throw IndexOutofBounds();
    }
    this->m_pElements[index] = value;

}


// Force the compiler to initialize the following instances
template
class Vector<int>;

template
class Vector<std::string>;
