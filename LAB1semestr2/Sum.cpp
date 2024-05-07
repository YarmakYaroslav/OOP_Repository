#include <iostream>
#include "Sum.h"
#include <string>

using namespace std;

Student::Student() :name("N/A"), age(0), bpoints(0.0)
{
    cout << "stvoreno constructor za zamovchuvannyam\n";
}

Student::Student(string n, int a, double b)
{
    name = n; age = a;
    if (b <= 100 && b >= 0)
        bpoints = b;
    else // nepriyemiemyye bally
        bpoints = 0.0;
    cout << "stvoreno constructor z parametrom\n";
}

Student::Student(string n, int a) :name(n), age(a)
{
    do
    {
        cout << "Vvedite osinku dlya " << name << " do 100 baliv: ";
        cin >> bpoints;
    } while (bpoints > 100 || bpoints < 0);
    cout << "Ekzemplyar klassa sozdan konstruktorom s parametrami\n";
}

Student::Student(const Student& src)//constructor copy
{
    cout << "constructor copy\n";
    name = src.name;
    age = src.age;
    bpoints = src.bpoints;
}

Student::~Student()// destructor
{
    cout << "work destructor\n";
}

void Student::setName(string n)
{
    name = n;
}

string Student::getName()
{
    return name;
}

void Student::setAge(int a)
{
    age = a;
}

int Student::getAge()
{
    return age;
}

void Student::setBpoints(double b)
{
    bpoints = b;
}

double Student::getBpoints()
{
    return bpoints;
}

void Student::showStudent()
{
    cout << "Student: " << name << "\t" << "Age: " << age << "\t" << "Bpoints:" << bpoints << endl;
}
