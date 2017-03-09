#include <iostream> 
#include <cmath>

using namespace std;

int main() {
		
	int a,b,c;
	cout <<"Enter the three sides of triangle:";
	cin >>a>>b>>c;
	if (a*a + b*b == c*c) {
	cout <<"YES"; }
	else {
	cout <<"NO"; }
	return 0;
} 