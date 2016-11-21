// FoyetFo_Baldes_Assignment4.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<iostream>
#include<string>
#include<math.h>
#include<iomanip>
using namespace std;


class Car
{
public:
	Car();
	~Car(); // deconstructor
	 
	 // Functions
	 double New_MPH_to_MPS();
	 string New_Names(string Name_Of_Driver);
	 
	 // Accessor Fuctions
	 string getNew_name();

private:
	float Total_Odometer;
	double Speed_MPH;
	string Name_Of_Driver;
	string Sponsor;
	int Car_Number;

};

Car::Car()
{
	
}

Car::~Car()
{
}

double Car::New_MPH_to_MPS()
{
	double Mi_P_Hr, MPS;
	const double convert = .45; // 1 mi/hr = .447 m/s

	cout << "enter Your Speed in Mi/Hr";
	cin >> Mi_P_Hr;

	MPS = Mi_P_Hr * convert; // converting from miles per hours to meter/seconds.

	return MPS;
}

string Car::New_Names(string Name_Of_Driver)
{
	Name_Of_Driver = {"willey May", "Same Jones"};
	return string();
}

string Car::getNew_name()
{
	return Name_Of_Driver;
}
int main()
{
	cout << "enter Drivers Name: ";
	cout << Car::getNew_name;

	
}