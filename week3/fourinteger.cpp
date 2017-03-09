#include <iostream>
#include <cmath>

using namespace std;

int main () {
	
	int a,b,c,d;
	cin >>a>>b>>c>>d;
	if (a>=b && b>=c && c>=d) {
	b = a;
	c = a;
	d = a;
	cout <<a<<" "<<b<<" "<<c<<" "<<d;
	} else {
	int A = a * a;
	int B = b * b;
	int C = c * c;
	int D = d * d;
	cout <<A<<endl;
	cout <<B<<endl;
	cout <<C<<endl;
	cout <<D<<endl;
	}
	return 0;
}  