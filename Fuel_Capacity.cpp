
#include <iostream>

using namespace std;

int main()
{
	int fuelTankCapacity ; 
	double miles_per_gallon;
	double totalMiles;

	cout << "Input automobile's fuel tank capacity"
		 << " and miles per gallon performance: " << endl;
	cin >> fuelTankCapacity >> miles_per_gallon;

	totalMiles = fuelTankCapacity * miles_per_gallon;

	cout << "Total miles the automobile can be driven: "
		 << totalMiles << endl;

	return 0;

}