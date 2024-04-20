#include <iostream>
#include <string>
#include <fstream>
#include <cstring>

using namespace std;

class Taxi
{
private:
	string name[25];
	int cost;
	int driving_experience;

public:
	string setName(string* n);
	string getName(string* n);
	void setCost(int c);
	int getCost();
	void setDriving_experience(int d);
	int getDriving_experience();
};

string Taxi::setName(string* n)
{
	name[25] = *n;
}

string Taxi::getName(string* n)
{
	return name[25];
}

void Taxi::setCost(int c)
{
	cost = c;
}

int Taxi::getCost()
{
	return cost;
}

void Taxi::setDriving_experience(int d)
{
	driving_experience = d;
}

int Taxi::getDriving_experience()
{
	return driving_experience;
}

int main()
{
	
	Taxi SpeedCar;
	string name[25] = { "Volvo" };
	cin >> name[25];
	SpeedCar.setName(name);
	int cost = 30;
	cin >> cost;
	SpeedCar.setCost(cost);
	int driving_experience = 58;
	//SpeedCar.setDriving_experience(driving_experience);
	SpeedCar.getName(name);
	cout << SpeedCar.getName(name) << endl;
	cout << SpeedCar.getCost() << endl;
	//cout << SpeedCar.getDriving_experience() << endl;
}
