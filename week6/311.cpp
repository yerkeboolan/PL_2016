#include <iostream>
#include <cmath>
 
using namespace std;
 
	double fastPow (double a, int n)
	{
 	if (n == 0)
  	return 1;
 	if (n % 2 == 0)
 	{
  	double p = fastPow (a, n / 2);
  	return p * p;
 	}
 	return fastPow (a, n - 1) * a;
	}
 
int main ()
{
 double a;
 int n;
 cin >> a >> n;
 cout << fastPow (a, n);
 return 0;
}