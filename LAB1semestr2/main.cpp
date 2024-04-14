#include <iostream>
#include <string>
#include <fstream>
#include <cstring>

using namespace std;

class Taxi
{
private:
	char name[25];
	int cost;
	int driving_experience;

public:
	char setName(char* n);
	char getName(char* n);
	void setCost(int c);
	int getCost();
	void setDriving_experience(int d);
	int getDriving_experience();
};

char Taxi::setName(char* n)
{
	strcpy(name, n); // 1) куди 2) звідки
}

char Taxi::getName(char* n)
{
	strcpy(n, name);// на що краще замінити "strcpy"
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
	char name[25] = { "Volvo" };
	cin >> name;
	SpeedCar.setName(name);
	int cost = 30;
	cin >> cost;
	SpeedCar.setCost(cost);
	int driving_experience = 58;
	//SpeedCar.setDriving_experience(driving_experience);
	SpeedCar.getName(name);
	cout << SpeedCar.getName() << endl;
	cout << SpeedCar.getCost() << endl;
	//cout << SpeedCar.getDriving_experience() << endl;
}
