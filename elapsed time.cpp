
#include <iostream>

using namespace std;

int main()
{
	int hours, minutes, seconds;

	cout << "Input elapsed time in seconds: ";
	cin >> seconds;

	hours = seconds / 3600;
	minutes = (seconds % 3600) / 60;
	seconds = (seconds % 3600) % 60;

	cout << "Elapsed Time: "
	     << hours << ":" << minutes 
		 << ":" << seconds << endl;

	return 0;

}

