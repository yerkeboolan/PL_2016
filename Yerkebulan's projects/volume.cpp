#include <iostream>
#include <cmath>

using namespace std;

int main(){

	double a,b,c,h;

	cin >> a >> b >> c >> h;

	double p = (a+b+c)/2;	
	double s = sqrt(p*(p-a)*(p-b)*(p-c));
	double v = (s*h)/3;

	cout << "Volume is: " << v;

	return 0;
}