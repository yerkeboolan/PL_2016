#include <iostream>
#include <cmath>

using namespace std;
 
int main () {
      	
	int X,Y,Z;
	cin >>X>>Y>>Z;
	if (X>Y && X>Z) { 
	cout <<X; }
	else if(Y>X && Y>Z) {
	cout <<Y;
	}
	else if (Z>X && Z>Y) {
	cout <<Z;
	}
	return 0;
}