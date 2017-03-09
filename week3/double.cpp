#include <iostream>
#include <cmath> 

using namespace std;

int main () {
		
	int X,Y,Z;
	cin >>X>>Y>>Z;
	if (X>=Y && Y>=Z) {
	int x = 2 * X;
	int y = 2 * Y;
	int z = 2 * Z;
	cout <<x<<" "<<y<<" "<<z;
	} else {
	int x = abs(X);
	int y = abs(Y);
	int z = abs(Z);
	cout <<x<<" "<<y<<" "<<z;
	} 
	return 0;
} 	