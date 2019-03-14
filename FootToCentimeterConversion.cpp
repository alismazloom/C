// This Program Gets Foot from input and
// Outputs the equal amount in Centimeters

#include <iostream>

using namespace std;

const int INCH_PER_FOOT = 12;
const double CENTIMETER_PER_INCH = 2.54;	

int main()
{
	double foot;
	double inch;
	double totalInch;
	double centimeter;

	cout << "Enter Foot and Inch with 1 space"
		 << "between them : ";
	cin >> foot >> inch;

	totalInch  = inch + foot * INCH_PER_FOOT;
	centimeter = totalInch * CENTIMETER_PER_INCH;

	cout << "Foot = " << foot << endl;
	cout << "Inch = " << inch << endl;
	cout << "Centimeter = " << centimeter << endl;

	return 0;
}




