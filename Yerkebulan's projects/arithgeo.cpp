#include <iostream>
#include <cmath>

using namespace std;

int main () {
	double a,b;
	cin >>a>>b;
	double A = (a+b)/2;
	double G = sqrt(a*b);
	cout <<"The  arithmetic mean is"<<" "<<A<<endl;
	cout <<"The geometric mean is"<<" "<<G<<endl;
	
	return 0;
}