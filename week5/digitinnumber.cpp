#include <iostream>

using namespace std;

int main() {

	int x, d;
	cin >>x>>d;
	int s = 0;
	for (int i = x; i > 0; i /= 10) {
	int LastDigit = i % 10;
		if (LastDigit == d) {
		++s;
		} 
	} 
	cout <<s;	
	return 0;
} 