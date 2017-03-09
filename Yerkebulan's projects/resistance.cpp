#include <iostream>
#include <cmath>

using namespace std;

int main () {
	double a, b, c;
	cin >> a>> b >>c;
	double d = (a*b*c)/(b*c + a*c + a*b);
	cout <<"The  overall is "<<" "<<d<< endl;
	return 0;
}