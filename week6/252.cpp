#include <iostream>
#include <cmath>
 
using namespace std;
 
	double myPow (double a, int n)
			{
		 if (n >= 0)
  		return pow (a, double (n));
 		else
  		return 1 / pow (a, double (abs (n)));
		}			
 
	int main ()
	{		
 	double a;
 	int n;
	 cin >> a >> n;
 	cout << myPow (a, n);
 return 0;
}
 
