
#include <iostream>

using namespace std;

const double FIRM_CHARGE_RATE = 0.015;

int main()
{
	int noOfSoldShares;
	double purchasePrice; // purchase price per share
	double sellPrice; // selling price per share

	cout << "Input the number of sold shares: ";
	cin >> noOfSoldShares;

	cout << "Input purchase and selling price per share, respectively: ";
	cout << endl;
	cin >> purchasePrice >> sellPrice;

	cout << "The amount invested: $"
		 << purchasePrice * noOfSoldShares << endl;
	
	cout << "Total service charges: $"
		 << noOfSoldShares * purchasePrice * FIRM_CHARGE_RATE +
		    noOfSoldShares * sellPrice * FIRM_CHARGE_RATE << endl;

	cout << "Gained amount on investment(negative amount means loss):"
		 << "$" << noOfSoldShares * (sellPrice - purchasePrice) 
		 << endl;
	
	cout << "Amount received after selling the stock: "
	     << "$" << noOfSoldShares * sellPrice * (1 - FIRM_CHARGE_RATE)
		 << endl;

	return 0;

}






	


