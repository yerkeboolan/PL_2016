#include <iostream>

using namespace std;

int main() {
	int n;
	cin >> n;
	int a[n];

	int l,r;
	cin >> l >>r;

	for(int i = 0; i < n; i++) {
		cin >> a[i];

	for(int i = 0; i < n; i++) {
		if(a[i] == l && a[i] == r) {
			swap(l,r);
		}
	}
	}

 cout <<a[n]<<" ";

	return 0;
	}	



   
