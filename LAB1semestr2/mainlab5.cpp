#include "Student.h"
#include <iostream>
using namespace std;
int main()
{
    Student x(6), y(x);
    cout << "Massiv x \n";
    cout << x;
    cout << "Vvedit nomera predmeti dlya dodatcovih balliv:\n";
    int i, j, l;
    cin >> i >> j >> l;
    cout << "x[" << i << "]= " << x[i] << endl;
    cout << "x[" << j << "]= " << x[j] << endl;
    cout << "x[" << l << "]= " << x[l] << endl;
    x[i] += 3;
    x[j] += 8;
    x[l] += 5;
    cout << "Massiv x \n";
    cout << x << endl;
    cout << "Massiv y \n";
    cout << y << endl;
    x(3);
    cout << "Usi predmeti + 3 bal za Olimpiadu \n";
    cout << x << endl;
    Student* p1 = new Student[3];
    *p1 = y;
    *(p1 + 1) = x;
    for (int i = 0; i < 3; i++)
    {
        cout << "\n p[" << i << "]= " << p1[i] << endl;
        cout << "Size=" << (p1 + i)->getSize() << endl;
    }

    *(p1 + 2) = y;
    p1[2](2);//(*(p1+2))(2);
    cout << "\n p1[2]= " << p1[2] << endl;
    delete[] p1;
    return 0;
}
