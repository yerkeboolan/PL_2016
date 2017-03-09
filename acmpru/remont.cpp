#include <iostream>

using namespace std;

int main() {
	
		int l, w, h;
		cin >> l >> w >> h;

		int S = 16;
		int s;
		s = l * w;

		int n;
		n = s/S;

		if(s > S) {
			cout << n;
		}
		else {
			cout <<1;
		}
return 0;
}

