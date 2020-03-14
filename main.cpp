#include "classes.hpp"

int main()
{
	int M = 30;
	char nameofcar1[30];
	char nameofcar2[30];
	double V1;
	double V2;
	double maxG;//максимальная грузоподъёмность 
	cout << "nameofcar: ";
	cin>>nameofcar1;
	cout << "V1: ";
	cin >> V1;
	car c1(nameofcar1, V1);
	cout << "marka: ";
	cin >> nameofcar2;
	cout << "V2: ";
	cin >> V2;
	cout << "maxG: ";
	cin >> maxG;
	GruzCar c2(nameofcar2, V2, maxG);
	car* c;
	c = &c1;
	c->print();
	c = &c2;
	c->print();
	return 0;
}
