#include <iostream>

using namespace std;

int main() {

	int n, k;
	cin >> n >>k;
	int g,s;
	g = k/n;
	s = k - (g*n);
	int t;
	t = (k - s)/n;

	
		if(k%n == 0) {
		cout <<g;
	}
	else if (k % n != 0) {
		cout <<t;
	}

	return 0;
	}


	 