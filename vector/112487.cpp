#include <iostream>
#include <vector>

using namespace std;

int main() {
	
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);

	int n;
	cin >> n;

	vector <int> c;

	for(int i = 0; i < n; i++) {
		int x;
		cin >> x;
		c.push_back(x);
	}

	for(int i = 0; i < n; i++) {
		if(c[i] != 0) {
			c[1] = c[1] + c[n-1];
			c[2] = c[2] + c[n-2];
		}

		else if(n % 2 != 0) {
			c[2] = c[2];
		}

	}


	for(int i = 0; i < n; i++) {
		cout << c[i];
	}

return 0;
}

	
			
