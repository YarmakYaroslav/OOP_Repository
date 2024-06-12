#include "StudentS.h"

Student::Student() :Man()
{
    yearsofstudy = 0;
}
Student::~Student() {}

Student::Student(string N, int A, string G, int Y) :Man(N, A, G)
{
    yearsofstudy = Y;
}

Student::Student(const Student& s)
{
    name = s.name;
    age = s.age;
    gender = s.gender;
    yearsofstudy = s.yearsofstudy;
}

void Student::Set_yearsofstudy(int Y)
{
    yearsofstudy = Y;
}

Student& Student::operator=(const Student& s)
{
    if (&s == this) return *this;
    name = s.name;
    gender = s.gender;
    age = s.age;
    yearsofstudy = s.yearsofstudy;
    return *this;
}

istream& operator>>(istream& in, Student& s)
{
    cout << "\nName:";
    in >> s.name;
    cout << "\nGender:";
    in >> s.gender;
    cout << "\nAge:";
    in >> s.age;
    cout << "\nYearsofstudy:";
    in >> s.yearsofstudy;
    return in;
}

ostream& operator<<(ostream& out, const Student& s)
{
    out << "\nNAME : " << s.name;
    out << "\nAGE : " << s.age;
    out << "\nGENDER : " << s.gender;
    out << "\nYEARSOFSTUDY: " << s.yearsofstudy;
    out << "\n";
    return out;
}
