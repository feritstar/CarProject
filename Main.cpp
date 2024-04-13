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

	// Oop in C++ First Lecture
	Car myCar("Renault Clio", "White", 5000, "Sedan");
	myCar.GetCarInformation();

	Car myCar2("Mercedes S500", "Black", 15000, "Hatchback");
	myCar2.GetCarInformation();

	myCar.SetCarColor("Green");
	cout << myCar.GetCarBrandName() << " New Color is: " << myCar.GetCarColor() << endl;

	cout << endl;

	// Oop in C++ Second Lecture
	Car* thirdCar;

	thirdCar = &myCar;
	thirdCar->SetCarColor("Red");
	thirdCar->SetCarPrice(8000);
	thirdCar->GetCarInformation();

	thirdCar = &myCar2;
	thirdCar->SetCarColor("Magenta");
	thirdCar->SetCarPrice(70000);
	thirdCar->GetCarInformation();

	thirdCar = new Car("Audi", "Turquoise", 65000, "stationWagon");
	thirdCar->GetCarInformation();
	myCar2.GetCarInformation();

	cout << endl << thirdCar->GetCarBrandName() << " Chasis Type " << *(thirdCar->chasisType) << endl << endl;

	delete thirdCar;

	cout << endl;
	return 0;
}