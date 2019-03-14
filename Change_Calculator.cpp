
#include <iostream>

using namespace std;

const int PENNIES_PER_HALFDOLLAR = 50;
const int PENNIES_PER_QUARTER = 25;
const int PENNIES_PER_DIME = 10;
const int PENNIES_PER_NICKLE = 5;

int main()
{

	int change;

	cout << "Input the number of pennies :";
	cin >> change;

	cout << "HalfDollars = " << change / PENNIES_PER_HALFDOLLAR 
		 << endl;
		change %= PENNIES_PER_HALFDOLLAR;

	cout << "Quarters = " << change / PENNIES_PER_QUARTER 
		 << endl;
		change %= PENNIES_PER_QUARTER;

	cout << "Dimes = " << change / PENNIES_PER_DIME 
		 << endl;
		change %= PENNIES_PER_DIME;

	cout << "Nickels = " << change / PENNIES_PER_NICKLE 
		 << endl;
		change %= PENNIES_PER_NICKLE;

	cout << "Pennies = " << change << endl;

	return 0;

}



