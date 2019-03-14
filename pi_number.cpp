
#include <iostream>
#include <iomanip>

using namespace std;

const double PI = 3.14159265;

int main()
{
	int sign;
	double count;
	double	noOfStatements;
	double taylorSum;

	cout << "Input the number of taylor statements: ";
	cin >> noOfStatements;

	sign = 1;
	count = 1;
	taylorSum = 0;
		 
	while (count < noOfStatements)
	{
		taylorSum += sign * 1.0 / (2 * count - 1);
		sign *= -1;
		count++;
	}

	cout << "Sum of taylor statements: "
		 << setprecision(10) << 4 * taylorSum << endl;

	cout << "    Exact value of pi is: " << PI << endl;

	return 0;

}