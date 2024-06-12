#include <iostream>
#include "Man.h"
#include "StudentS.h"

using namespace std;

void f1(Man& m)
{
    m.Set_name("Igor");
    cout << m;
}

Man f2()
{
    Student s("Ivan", 1, "M", 2);
    return s;
}

int main()
{
    //Robota z klasom Man.
    Man a;
    cin >> a;
    cout << a;

    Man b("Mark", 4, "M");
    cout << b;

    a = b;
    cout << a;
    //Robota z klasom Student.

    Student m;
    cin >> m;
    cout << m;
    //Pryntsyp pidstanovky.

    f1(m);//peredayemo obʺyekt klasu Student.
    a = f2();//stvoryuyemo v funktsiyi ob'yekt klasu Student.
    cout << a;
}
