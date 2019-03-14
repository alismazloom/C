
#include <iostream>

using namespace std;

int main()
{
	double grade1, grade2, grade3, grade4, grade5;
	double average;

	cout << "Input five grades in decimal format: ";
	cin >> grade1 >> grade2 >> grade3 >> grade4 >> grade5;

	average = (grade1 + grade2 + grade3 + grade4 + grade5) / 5;

	cout << "Rounded Average is: " 
		 << static_cast<int>(average + 0.5)
         << endl;		

	return 0;

}