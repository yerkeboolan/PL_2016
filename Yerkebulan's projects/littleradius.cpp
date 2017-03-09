#include <iostream>
#include <cmath>

using namespace std;

int main () {
	double a,c;
	cin >>a>>c;
	double b = sqrt(c*c - a*a);
	double p = (a+b+c)/2;
	double r = sqrt((p-a)*(p-b)*(p-c)/p);
	cout <<"The second leg  is "<<" "<<b<<endl;
	cout <<"The  radius is "<<" "<<r<<endl;
	return 0;
}