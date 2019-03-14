
#include <iostream>

using namespace std;

const int INCHES_PER_FOOT = 12;
const double CENTIMETERS_PER_INCH = 2.54;

int main()
{
	int feet;
	int inches;
	int totalInches;
	double centimeters;

	cout << "Input the Length in Feet and Inches : ";
	cin >> feet >> inches;

	totalInches = (feet * INCHES_PER_FOOT) + inches;
	centimeters = totalInches * CENTIMETERS_PER_INCH;

	cout << "Feet = " << feet << endl;
	cout << "Inches = " << inches << endl;
	cout << "TotalInches = " << totalInches << endl;
	cout << "Centimeters = " << centimeters << endl;

	return 0;
}


