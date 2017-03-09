#include <iostream>
#include <cmath>

using namespace std;

int main () {
	double a,b,c;
	cin >>a>>b>>c;
	double l = sqrt((b*c)*((b+c)*(b+c) - a*a));
	cout <<"The bisector is "<<" "<<l<<endl;
	return 0;
}