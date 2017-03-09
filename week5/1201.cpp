#include <iostream>

using namespace std;

int main() {

	int n;
	cin >> n;
	n = min(n, 30); 
	double s = 0, f = 1;
	for (int i = 1; i <= n; ++i) {
		s += 1/f;
		f = f * i;
	}
	cout  <<s+1<<endl; 
	return 0;
} 


