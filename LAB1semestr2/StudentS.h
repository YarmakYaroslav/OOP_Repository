#ifndef STUDENTS_H_INCLUDED
#define STUDENTS_H_INCLUDED

#include "man.h"
//klas Student uspadkovuyet?sya vid klasu Man z klyuchom dostupu public.
class Student :public Man
{
public:
    Student(); //konstruktor bez parametriv za zamovchuvannyam
    ~Student();//destruktor.
    Student(string, int, string, int);//konstruktor z parametramy.
    Student(const Student&);//konstruktor kopiyuvannya.

    int Get_yearsofstudy() { return yearsofstudy; }
    void Set_yearsofstudy(int);

    Student& operator=(const Student&);//perevantazhennya operatora prysvoyuvannya.

    friend istream& operator>> (istream& in, Student& s);//Perevantazhennya operatoriv vvedennya ta vyvedennya.
    friend ostream& operator<<(ostream& out, const Student& s);

protected:
    int yearsofstudy;//атрибут вантажності.
};

#endif