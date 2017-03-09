#include <iostream>

using namespace std;

int main() {

	int n;
	cin >> n;
	double s = 0, f = 1;
	for (int i = 1; i <= n; ++i) {
		s += 1.0/f;
		f = f * i;
	}
	cout  <<s+1; 
	return 0;
} 
