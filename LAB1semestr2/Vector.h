#pragma once
#ifndef VECTOR_H_INCLUDED
#define VECTOR_H_INCLUDED
#include <iostream>
using namespace std;
const int MAX_SIZE = 20;
class Vector
{
    int size;
    int* beg;
public:
    Vector()
    {
        size = 0;
        beg = 0;
    }
    Vector(int s);
    Vector(const Vector& v);
    ~Vector();
    const Vector& operator=(const Vector& v);
    int& operator[](int i);
    void operator()(int n);
    int getSize();
    friend ostream& operator<<(ostream& out, const Vector& v);
    friend istream& operator>>(istream& in, Vector& v);
};
#endif // VECTOR_H_INCLUDED