#include <string>
#include <cstring>
#include <iostream>
#include "Sum.h"

using namespace std;

int main()
{
    Student emp1;
    emp1.showStudent();
    Student emp2("Ivan", 35, 100.0);
    emp2.showStudent();
    Student emp3("Andrew", 18);
    emp3.showStudent();

    Student department[4] = { Student("A", 30), Student("B", 25), Student("C", 61) };
    for (int i = 0; i < 4; i++)
    {
        department[i].showStudent();
    }

    Student emp4 = emp3;
    emp4.showStudent();
    return 0;
}
