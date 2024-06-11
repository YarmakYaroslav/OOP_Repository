#include <iostream>

using namespace std;

class Number
{
public:
	virtual void rachunok() = 0;
};

class Diysne : public Number
{

public:

	int diysne = 7;

	void  rachunok()
	{
		cout << "Diysne + Diysne: " << diysne + diysne << "\n";
	}
};

class Decimal : public Number
{
public:

	float decimal = 3.14;

	void  rachunok()
	{
		cout << "Decimal + Decimal: " << decimal + decimal << "\n";
	}
};

int main()
{
	Number* a;
	Diysne diysne;
	Decimal decimal;

	a = &diysne;
	cout << "Diysne: " << endl;
	a->rachunok();

	a = &decimal;
	cout << "Decimal: " << endl;
	a->rachunok();

	return 0;
}
