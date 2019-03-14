#include <iostream>
#include <iomanip>
#include <cmath>

using std::cout;
using std::cin;
using std::endl;
using std::fixed;
using std::setprecision;


int main() {
	
	double fact;
	int i, n;

	fact = 1;

	cout <<"Enter a posotive number :";
	cin >> n;

	for(i = 1;i <= n; i++) 
		fact *= i;
	
	cout << setprecision(0) << fixed << fact << endl;
	
	i = 2;
	while (i < sqrt(fact)) 
		if (fmod(fact , i) == 0)
		{	
			fact /= i;
			cout << i << endl;
		}
		else
			i++;
	
	cout << setprecision(0) <<fact << endl;

	return 0;
}


