#include "Student.h"
#include <iostream>

using namespace std;

Student::Student(int s)
{
    if (s > MAX_SIZE)
        cout << "Student length more than MAXSIZE\n";

    size = s;
    beg = new int[s];
    for (int i = 0; i < size; i++)
        beg[i] = i * 10;
}
Student::Student(const Student& v)
{
    cout << "Copy constructor" << endl;
    size = v.size;
    beg = new int[size];
    for (int i = 0; i < size; i++)
        beg[i] = v.beg[i];
}
Student::~Student()
{
    if (beg != 0)
        delete[]beg;
}

const Student& Student::operator =(const Student& v)
{
    if (this == &v)
        return *this;
    if (beg != 0)
        delete[]beg;
    size = v.size;
    beg = new int[size];
    for (int i = 0; i < size; i++)
        beg[i] = v.beg[i] + 10;
    return*this;
}
ostream& operator<<(ostream& output, const Student& v)
{
    if (v.size == 0)
        output << "Empty\n";
    else
    {
        for (int i = 0; i < v.size; i++)
            output << v.beg[i] << " ";
        output << endl;
    }
    return output;
}
istream& operator >>(istream& input, Student& v)
{
    for (int i = 0; i < v.size; i++)
    {
        cout << ">";
        input >> v.beg[i];
    }
    return input;
}
int& Student::operator [](int i)
{
    if (i < 0)
        cout << "index <0";
    if (i >= size)
        cout << "index>size";
    return beg[i];
}
int Student::getSize()
{
    return size;
}
void Student:: operator()(int n)
{
    for (int i = 0; i < size; i++)
        beg[i] = n + beg[i];
}
