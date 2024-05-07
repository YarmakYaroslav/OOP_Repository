#pragma once
#ifndef Sum_H
#define Sum_H
#include <iostream>
#include <string>

using namespace std;

class Student
{
    string name;
    int age;
    string position;
    double bpoints;

public:
    Student();// constructor za zamovchuvannyam
    Student(string p, int a, double b);// constructor z parametrami
    Student(string n, int a = 18);// constructor z parametrami ta zamovchuvannyam
    Student(const Student& src);// constructor copy
    ~Student();// destructor

    void setName(string n);
    string getName();
    void setAge(int a);
    int getAge();
    void setBpoints(double b);
    double getBpoints();
    void showStudent();
};
#endif
