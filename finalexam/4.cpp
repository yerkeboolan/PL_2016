#include <iostream>
#include <vector>

using namespace std;

int n, k, e;
vector <int> v;

int main() {
	cin >> n >> k;
	for (int i = 0; i < n; i++) {
		cin >> e;
		v.push_back(e);
	}
	for (int i = 0; i < n; i++) {
		if (i != k - 1) {
			cout << v[i] << " ";
		}
	}
	return 0;
}


	











						