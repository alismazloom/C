
#include <iostream>
#include <string>

using namespace std;

int main()
{
	string string1, string2, string3;

	cout << "Input three strings: " << endl;
	cin >> string1 >> string2 >> string3;

	cout << "The permutations of strings are: " << endl;

	cout << string1 ; //first permutation
	cout << string2 ;
	cout << string3 << endl;

	cout << string1 ; //second permutation
	cout << string3 ;
	cout << string2 << endl;

	cout << string2 ; //third permutation
	cout << string1 ;
	cout << string3 << endl;

	cout << string2 ; //forth permutation
	cout << string3 ;
	cout << string1 << endl;

	cout << string3 ; //fifth permutation
	cout << string2 ;
	cout << string1 << endl;

	cout << string3 ; //sixth permutation
	cout << string1 ;
	cout << string2 << endl;

	return 0;

}