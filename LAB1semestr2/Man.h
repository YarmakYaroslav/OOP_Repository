#ifndef MAN_H_INCLUDED
#define MAN_H_INCLUDED
#include <string>
#include <iostream>

using namespace std;

class Man
{
public:
    Man();//konstruktor bez parametriv za zamovchuvannyam.
    ~Man();//destruktor.
    Man(string, int, string);//konstruktor z parametramy.
    Man(const Man&);//konstruktor kopiyuvannya.

    string Get_name() { return name; }
    int Get_age() { return age; }
    string Get_gender() { return gender; }

    void Set_name(string);
    void Set_age(int);
    void Set_gender(string);

    Man& operator=(const Man&);//perevantazhennya operatora prysvoyuvannya.
    //Perevantazhennya operatoriv vvedennya-vyvedennya.

    friend istream& operator>>(istream& in, Man& m);
    friend ostream& operator<<(ostream& out, const Man& m);

protected:
    string name;
    int age;
    string gender;
};

#endif
