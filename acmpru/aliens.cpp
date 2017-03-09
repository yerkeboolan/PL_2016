#include <iostream>

using namespace std;

int main() {
	
	int r, r1, r2;

	cin >> r >> r1 >> r2;

	if(r > r1 && r > r2) {
		cout <<"YES";
	}
	else if ((r < r1 && r < r2) || (r == r1 && r == r2)) {
		cout <<"NO";
	}

	return 0;
	}

	