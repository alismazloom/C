
#include <iostream>

using namespace std;

int main()
{
    double decimal;

	cout << "Input a Decimal number: ";
	cin >> decimal;
	cout << "Rounded number is: " 
		 << static_cast<int>(decimal + 0.5) << endl;
	 
	return 0;
}