#include <iostream>

using namespace std;

int main() {

	int x;
	cin >>x;
	int s = 0;
	for (int i = 1; i <= x; i++) {
		if (x % i == 0) {
		s++;
	}
}
	cout <<s; 
return 0;
}