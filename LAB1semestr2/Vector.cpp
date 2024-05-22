#include "Vector.h"
#include <iostream>

using namespace std;
Vector::Vector(int s)
{
    if (s > MAX_SIZE)
        cout << "Vector length more than MAXSIZE\n";

    size = s;
    beg = new int[s];
    for (int i = 0; i < size; i++)
        beg[i] = i * 10;
}
Vector::Vector(const Vector& v)
{
    cout << "Copy constructor" << endl;
    size = v.size;
    beg = new int[size];
    for (int i = 0; i < size; i++)
        beg[i] = v.beg[i];
}
Vector::~Vector()
{
    if (beg != 0)
        delete[]beg;
}

const Vector& Vector::operator =(const Vector& v)
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
ostream& operator<<(ostream& output, const Vector& v)
{
    if (v.size == 0) output << "Empty\n";
    else
    {
        for (int i = 0; i < v.size; i++)
            output << v.beg[i] << " ";
        output << endl;
    }
    return output;
}
istream& operator >>(istream& input, Vector& v)
{
    for (int i = 0; i < v.size; i++)
    {
        cout << ">";
        input >> v.beg[i];
    }
    return input;
}
int& Vector::operator [](int i)
{
    if (i < 0) 
        cout << "index <0";
    if (i >= size) 
        cout << "index>size";
    return beg[i];
}
int Vector::getSize()
{
    return size;
}
void Vector:: operator()(int n)
{
    for (int i = 0; i < size; i++)
        beg[i] = n + beg[i];
}
