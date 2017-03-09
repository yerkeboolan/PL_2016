#include <iostream>
#include <set> 

using namespace std;

int main() {
	set <int> S;
	int n; cin >> n;
	int a[n + 1];
	for (int i = 0; i < n; ++i) {
		cin >> a[i];
		S.insert(a[i]);
	}
	for (int i = 0; i < n; ++i) {
		if (a[i] == *S.rbegin())
			a[i] = *S.begin();
		cout << a[i] << " ";
	}
	return 0;
}
