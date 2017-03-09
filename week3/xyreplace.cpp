#include <iostream>
#include <cmath>
	
using namespace std;

int main () {
	
	int x,y;
	cin >>x>>y;
	int a,b;
	if (x>y) {
	a = x * y * 2;
	b = (x + y) / 2;   
	} else {
	b = x * y * 2;
	a = (x + y) / 2;
	}
	x = a;
 	y = b;
	cout <<x<<" "<<y<<endl;
	return 0;
} 
