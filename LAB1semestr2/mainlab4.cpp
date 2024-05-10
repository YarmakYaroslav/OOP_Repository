#include <iostream>
#include "three_d.h"

using namespace std;

int main()
{
    three_d a(1, 2, 3), b(10, 10, 10), c;
    cout << "c=a+b \n";
    c = a + b;
    a.show();
    b.show();
    c.show();

    cout << "c=b=a \n";
    c = b = a;
    a.show();
    b.show();
    c.show();

    cout << "a=--c \n";
    a = --c; //префіксна форма декременту - об'єкт отримує
    //значення с після його декрементування
    a.show();
    c.show();

    cout << "a=c-- \n";
    a = c--;//постфіксна форма декременту - об'єкт отримує 
    //значення с до його декрементування
    a.show();
    c.show();

    cout << "c=a*b \n";
    c = a * b;
    c.show();

    cout << "a=++c; \n";
    a = ++c;
    a.show();
    c.show();

    cout << "a=c++ \n";
    a = c++;
    a.show();
    c.show();

    cout << "c=a-b \n";
    c = a - b;
    c.show();

    cout << "a == c true or false \n";
    a == c;
}
