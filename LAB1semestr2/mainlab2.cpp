#include <iostream>
#include <string>
#include <fstream>
#include <cstring>

using namespace std;

class Taxi
{
private:
	string name;
	int cost;
	int driving_experience;

public:
	void setName(string n);
	string getName();
	void setCost(int c);
	int getCost();
	void setDrivingExperience(int d);
	int getDrivingExperience();
};

void Taxi::setName(string n)
{
	name = n;
}

string Taxi::getName()
{
	return name;
}

void Taxi::setCost(int c)
{
	cost = c;
}

int Taxi::getCost()
{
	return cost;
}

void Taxi::setDrivingExperience(int d)
{
	driving_experience = d;
}

int Taxi::getDrivingExperience()
{
	return driving_experience;
}

int main()
{
	Taxi SpeedCar;
	string name;
	int cost;

	cin >> name;
	SpeedCar.setName(name);
	cin >> cost;
	SpeedCar.setCost(cost);
	int driving_experience = 58;
	SpeedCar.setDrivingExperience(driving_experience);

	cout << SpeedCar.getName() << endl;
	cout << SpeedCar.getCost() << endl;
	cout << SpeedCar.getDrivingExperience() << endl;
}
