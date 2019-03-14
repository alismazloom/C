
#include <iostream>

using namespace std;

const int POUNDS_PER_TON = 2205;

int main()
{
	
	int noOfBags;
	double riceAmountinBag;
	
	cout << "Input the amount of rice in pounds in a bag: ";
	cin >> riceAmountinBag;

	noOfBags = static_cast<int>
		(POUNDS_PER_TON / riceAmountinBag + 0.5);

	cout << "Number of required bags: " << noOfBags << endl;

	return 0;

}



