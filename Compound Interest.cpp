
#include <iostream>
#include <cmath>
#include <iomanip>

using std::cin;
using std::cout;
using std::endl;
using std::fixed;
using std::setprecision;

int main ()
{
	double a = 0;
	double r;
	double s;
	int n = 0;

	while ( a != -1 )  {

	     cout << " \n  Principal";
	     cout << "(enter -1 for termination:)? ";
	     cin >> a;
	     cout << " \n ";

	     if (a == -1 )
	  	   break;

	     cout << " Interest Rate? ";
	     cin >> r;
	     cout << " \n ";

	     cout << " Periods? ";
	     cin >> n;
	     cout << " \n ";

                     s = a * pow ( 1 + r , n);
  
	     cout  << " Deposit = $" 
            	             << setprecision( 2 ) 
	             << fixed << s << endl;

	} 
}
