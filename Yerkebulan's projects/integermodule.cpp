#include <iostream>
#include <cmath>

using namespace std;

int main () {
	double a,b;
	cin >>a>>b;
	double A = abs((a+b)/2);
	double G = sqrt(abs(a*b));
	cout <<"The arithmetic mean is"<<" "<<A<<endl;
	cout <<"The geometric mean is"<<" "<<G<<endl;
	return 0;
}