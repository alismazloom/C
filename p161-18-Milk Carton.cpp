
#include <iostream>

using namespace std;

const double LITERS_PER_CARTON = 3.78;
const double COST_PER_LITER = 0.38;
const double PROFIT_PER_CARTON = 0.27;

int main()
{
	int totalMilk; //total amount of milk produced in the morning
	int noOfCartons; //number of needed cartons
	double cost, profit;

	cout << "Input total amount of produced milk in Liters: ";
	cin >> totalMilk;

	noOfCartons = totalMilk / LITERS_PER_CARTON;
	cout << "Number of needed cartons: "
		 << noOfCartons << endl;

	cost = totalMilk * COST_PER_LITER;
	cout << "Cost of produced milk: " << cost << endl;

	profit = noOfCartons * PROFIT_PER_CARTON;
	cout << "profit of prodeced milk: " << profit << endl;

	return 0;

}

		 
