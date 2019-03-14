
#include <iostream>
#include <iomanip>

using namespace std;

const int SUMMER_WEEKS = 5;
const double TAX_RATE = 0.14;
const double CLOTHS_AND_ACCESSORIES_RATE = 0.10;
const double SCHOOL_SUPPLIES_RATE = 0.01;
double SAVINGS_BOND_RATE = 0.25;
double PARENTS_BOND_SPENDING = 0.50;

int main()
{
	int hour_per_week;
	double pay_rate_per_hour;
	double income_before_tax;
	double income_after_tax;
	double balance;

	cout << setprecision(5);
	cout << "Input total work hours per week: ";
	cin >> hour_per_week;

	cout << "Input pay rate for an hour: ";
	cin >> pay_rate_per_hour;

	income_before_tax =
		hour_per_week * pay_rate_per_hour * SUMMER_WEEKS;
	income_after_tax = income_before_tax * (1 - TAX_RATE);
	cout << "Income before tax: " << income_before_tax << endl;
	cout << "Income after tax: " << income_after_tax << endl;

	cout << "Money spent on cloths and accessories: "
		 << income_after_tax * CLOTHS_AND_ACCESSORIES_RATE
		 << endl;
	cout << "Money spent on school supplies: "
		 << income_after_tax * SCHOOL_SUPPLIES_RATE
		 << endl;

	balance = income_after_tax * 
		(1 - (CLOTHS_AND_ACCESSORIES_RATE + SCHOOL_SUPPLIES_RATE));

	cout << "Money you spent on buying bonds: "
		 << balance * SAVINGS_BOND_RATE << endl;
	cout << "Money your parents spent on buying bonds for you: "
		 << (balance * SAVINGS_BOND_RATE) * PARENTS_BOND_SPENDING
		 << endl;

	return 0;

}

