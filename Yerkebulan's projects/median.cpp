#include <iostream>
#include <cmath>

using namespace std;

int main () {
	double a,b,c;
	cin >>a>>b>>c;
	double m = 0.5*sqrt(2*(b*b + c*c) - a*a);
	double M = 0.5*sqrt(2*(a*a + c*c) - b*b);
	double n = 0.5*sqrt(2*(a*a + b*b) - c*c);
	cout <<"The 1 median is "<<" "<<m<<endl;
	cout <<"The 2 median is "<<" "<<M<<endl;
	cout <<"The 3 median is "<<" "<<n<<endl;
	return 0;
}