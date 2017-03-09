#include <iostream>
#include <cmath>

using namespace std;

int main () {

	double R, r, H;
	double P = 3.14;
	cin >> R >> r >> H;
	double V= ((P*H)/3)*(R*R + R*r + r*r);
	double L= sqrt(H*H + (R-r)*(R-r));
	double S= (P*L)*(R+r) + P*(R*R + r*r);
	cout <<"The area is" <<" "<<S<< endl;
	cout <<"The volume is"<<" "<<V<<endl;
	return 0;
}