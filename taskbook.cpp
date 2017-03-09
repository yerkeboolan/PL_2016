#include <iostream>

using namespace std;

int main() {

	int x,y,z;
	cin >>x>>y>>z;
	
	if (x > y && y > z) {
		cout <<x;
	}
	else if (y > x && x > z) {
		cout <<y;
	}
	else if (z > x && x > y) {
		cout <<z;
	}
	else if (z > x && x == y) {
		cout <<z;
	}
	else if (x > y && y == z) {
		cout <<x; 
	}
	else if ( y > x && x == z) {
		cout <<y;
	}
	return 0;
}     
   
 