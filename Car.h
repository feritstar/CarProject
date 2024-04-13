#pragma once

#include <iostream>

using namespace std;

class Car
{
public:
	// Constructors
	Car();
	Car(string _brandName, string _color, double _price);

	// Destructor
	~Car();

	void GetCarInformation();
	void SetCarBrandName(string _brandName);
	void SetCarColor(string _color);
	void SetCarPrice(double _price);
	
	string GetCarColor();
	string GetCarBrandName();
	double GetCarPrice();

private:
	string brandName = "";
	string color = "";
	double price = 0;
};

