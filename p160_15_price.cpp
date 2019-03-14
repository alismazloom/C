
#include <iostream>

using namespace std;

int main()
{
	double originalPrice;
	double markUpPercentage;
	double salesTaxRate;
	double sellingPrice;
	double salesTax;

	cout << "Input original price , mark-up percentage "
		 << "and sales tax rate: " << endl;
	cin >> originalPrice >> markUpPercentage >> salesTaxRate;

	cout << "original price: " << originalPrice << endl;
	cout << "mark-up percentage: " << markUpPercentage 
		 << "%" << endl;

	sellingPrice = originalPrice * (1 + markUpPercentage / 100);
	cout << "Store's selling price: " 
		 << sellingPrice << endl;

	salesTax = sellingPrice * salesTaxRate / 100;
	cout << "sales tax rate: " << salesTaxRate 
		 << "%" << endl;
	cout << "sales tax: " 
		 << salesTax << endl;
	
	cout << "final price of item: "
		 << sellingPrice + salesTax << endl;

	return 0;

}

