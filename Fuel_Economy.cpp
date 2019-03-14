
    //**********************************************************
    //*      In order to change miles per gallon metric        *
	//*        to liters per 100 kilometers metric use         *
	//*          this formula: l.p.h.k = 235 / m.p.g.          *
	//*          and viceversa. m.p.g = 235 / l.p.h.k          *
	//**********************************************************


#include <iostream>
#include <iomanip>

using namespace std;

const double LITERS_PER_GALLON = 3.78541;
const double KILOMETERS_PER_MILE = 1.60934;

int main()
{
	int totalMiles;
	int ftcInGallons; //FuelTank Capacity in gallons
	int milesPerGallon; //American metric for fuel economy
	double litersPer100Kilometers; //Iraninan metric for fuel economy
	double kilometersPerLiter;
	double ftcInLiters; //FuelTank Capacity in liters
	double totalKilometers;

	cout << "Input Fueltank capacity(Gal) and "
		 << "Miles per Gallon of the car: ";
	cin >> ftcInGallons >> milesPerGallon;
	
	ftcInLiters = ftcInGallons * LITERS_PER_GALLON;
	cout << "FuelTank Capacity in Liters: "
		 << static_cast<int>(ftcInLiters + 0.5) << endl;

	totalMiles = milesPerGallon * ftcInGallons;
	cout << "Total Miles with full FuelTank: "
		 << totalMiles << endl;

	kilometersPerLiter = milesPerGallon / LITERS_PER_GALLON 
	* KILOMETERS_PER_MILE;
	totalKilometers = kilometersPerLiter * ftcInLiters;

	cout << "Total Kilometers with full FuelTank: "
		 << static_cast<int>(totalKilometers + 0.5) << endl;

	litersPer100Kilometers = 100 / kilometersPerLiter;

	cout << setprecision(3);
	cout <<"Fuel Consumption in Liters per 100 Kilometers: "
		 << litersPer100Kilometers << endl;

	return 0;

}


