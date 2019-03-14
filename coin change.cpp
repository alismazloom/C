
#include <iostream>

using namespace std;

int main ()
{
	int quarters, dimes;
	int nickels, pennies;

	cout << "Input the number of qurters, dimes and nickels: ";
	cin >> quarters >> dimes >> nickels;

	pennies = 25 * quarters + 10 * dimes + 5 * nickels;
	cout << "total pennies: " << pennies << endl;

	return 0;

}