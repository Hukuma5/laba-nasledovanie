#include <iostream>
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

using namespace std;

class car
{
	char* name;
	double maxV;
public:
	car(char* name, double maxV)
	{
		this->name=name; this->maxV=maxV;
	}
	virtual void print()
	{
		cout << "\nname:" << name <<" max V ="<< maxV;
	}
	~car()
	{
		delete[] name;
	}
};
class GruzCar : public car
{
	double MG; //грузоподъёмность в тоннах
public:
	GruzCar(char* name, double maxV, double MG) :
		car(name, maxV)
	{
		this->MG=MG;
	}
	void print()
	{
		car::print();

		cout << " max weight of cargo =" << MG;
	}
};
