#pragma once
#ifndef STUDENT_H_INCLUDED
#define STUDENT_H_INCLUDED
#include <iostream>
using namespace std;
const int MAX_SIZE = 20;
class Student
{
    int size;
    int* beg;
public:
    Student()
    {
        size = 0;
        beg = 0;
    }
    Student(int s);
    Student(const Student& v);
    ~Student();
    const Student& operator=(const Student& v);
    int& operator[](int i);
    void operator()(int n);
    int getSize();
    friend ostream& operator<<(ostream& out, const Student& v);
    friend istream& operator>>(istream& in, Student& v);
};
#endif // STUDENT_H_INCLUDED
