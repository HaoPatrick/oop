//
// Created by Haoxiangpeng on 12/22/2016.
//

#pragma once

#include <exception>
#include <string>
class IndexOutofBounds : public std::exception {
    const char *what() const throw() {
        return "Index out of bounds";
    }
};

template<class T>
class Vector {
public:
    Vector();        // create an empty vector
    Vector(int size);    // create a vector of size elements
    Vector(const Vector &r);    // copy ctor
    virtual ~Vector();

    T &operator[](int index);

    // return the specified element, throws exception when index <0 or >=m_nSize
    int  size()const;        // return the size of the vector
    int inflate(int addSize);    // expand the storage to m_nSize+addSize, return the new size


public:
    T *m_pElements;
    int m_nSize;
};
