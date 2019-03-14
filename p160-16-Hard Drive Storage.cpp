
#include <iostream>
#include <iomanip>

using namespace std;        

int main()
{

	int manufactureSize;
	double realSize;
	double conversionRate;

	cout << "Input manufacturer's stated size of"
		 << "Hard Drive in GBs: ";
	cin >> manufactureSize;

	conversionRate = 
	static_cast<double>(1000 * 1000 * 1000) / (1024 * 1024 * 1024);
	realSize = manufactureSize * conversionRate;

	cout << "Actual storage capacity of the hard drive: "
	     << setprecision(4) << realSize << endl;

	return 0;

}