#include <iostream>
#include <cmath>

using namespace std; 
int main () {
	double a,b,c;
	cin >>a>>b>>c;
	double p = (a+b+c)/2;
	double S = sqrt(p*(p-a)*(p-b)*(p-c));
	double h = (2*S)/a;
	double H = (2*S)/b;
	double q = (2*S)/c;
	cout <<"The 1 height is "<<" "<<h<<endl;
	cout <<"The 2 height is "<<" "<<H<<endl;
	cout <<"The 3 height is "<<" "<<q<<endl;
	return 0;
}