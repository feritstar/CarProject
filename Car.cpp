#include "Car.h"

// Default Constructor
Car::Car()
{

}

// Constructor
Car::Car(string _brandName, string _color, double _price)
{
	brandName = _brandName;
	color = _color;
	price = _price;
}

void Car::GetCarInformation()
{
	cout << brandName << ", " << color << ", " << price << "$" << endl;
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
