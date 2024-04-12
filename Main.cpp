#include "Main.h"
#include <iostream>
#include "Car.h"
using namespace std;

int main()
{
	cout << "* * * * * * * * * * * * * * *" << endl;
	cout << "*                           *" << endl;
	cout << "*       C++ Tutorials       *" << endl;
	cout << "*                           *" << endl;
	cout << "* * * * * * * * * * * * * * *" << endl;

	cout << endl;

	Car myCar("Renault Clio", "White", 5000);
	myCar.GetCarInformation();

	Car myCar2("Mercedes S500", "Black", 15000);
	myCar2.GetCarInformation();

	myCar.SetCarColor("Green");
	cout << myCar.GetCarBrandName() << " New Color is: " << myCar.GetCarColor() << endl;

	cout << endl;
	return 0;
}