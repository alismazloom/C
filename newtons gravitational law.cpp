
#include <iostream>

using namespace std;

const double K = 6.67e-8; //gravitational constant

int main()
{
	double mass1, mass2;
	double force, distance;

	cout << "Input mass of the two objects: ";
	cin >> mass1 >> mass2;

	cout << "Input the distance between them: ";
	cin >> distance;
	cout << scientific; //optional format

	force = K * mass1 * mass2 / (distance * distance);
	cout << "Attraction force between the two objects: "
		 << endl;
	cout << force << endl;

	return 0;

}
