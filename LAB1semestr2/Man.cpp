#include "Man.h"

Man::Man()
{
    name = "";
    age = 0;
    gender = "";
}

Man::~Man() {}

Man::Man(string N, int A, string G)
{
    name = N;
    age = A;
    gender = G;
}
Man::Man(const Man& man)
{
    name = man.name;
    age = man.age;
    gender = man.gender;
}

void Man::Set_age(int A)
{
    age = A;
}

void Man::Set_name(string N)
{
    name = N;
}

void Man::Set_gender(string G)
{
    gender = G;
}

Man& Man::operator=(const Man& m)
{
    if (&m == this)
        return *this;
    name = m.name;
    gender = m.gender;
    age = m.age;
    return *this;
}

istream& operator>>(istream& in, Man& m)
{
    cout << "\nName:";
    in >> m.name;

    cout << "\nGender:";
    in >> m.gender;

    cout << "\nAge:";
    in >> m.age;

    return in;
}

ostream& operator<<(ostream& out, const Man& m)
{
    out << "\nName : " << m.name;
    out << "\nAge : " << m.age;
    out << "\nGender : " << m.gender;
    out << "\n";
    return out;
}
