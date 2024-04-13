#include "Car.h"

// Default Constructor
Car::Car()
{

}

// Constructor
Car::Car(string _brandName, string _color, double _price, string _chasisType)
{
	brandName = _brandName;
	color = _color;
	price = _price;
	pChasisType = new string(_chasisType);
}

// Destructor
// Main of destructor is, deleting the pointers which are created inside classes.
// The reason of doing that is preventing memory leaks after destroying class object.
Car::~Car()
{
	cout << brandName << ", Destructor is called!" << endl;
	delete pChasisType;
	//cout << pChasisType << endl; // we can see that created pointer are destroyed.
}

void Car::GetCarInformation()
{
	cout << brandName << ", " << color << ", " << price << "$ " << *pChasisType << endl;
}

void Car::SetCarBrandName(string _brandName)
{
	brandName = _brandName;
}

void Car::SetCarColor(string _color)
{
	color = _color;
}

void Car::SetCarPrice(double _price)
{
	price = _price;
}

string Car::GetCarColor()
{
	return color;
}

string Car::GetCarBrandName()
{
	return brandName;
}

double Car::GetCarPrice()
{
	return price;
}
