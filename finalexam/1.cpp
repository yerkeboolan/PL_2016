#include <iostream>

using namespace std;

int main() {
	

	int n;
	cin >> n;
	int a[n];

	int maxi;
	int mini;
	for(int i = 0; i < n; i++) {
		cin >> a[i];
	}
	maxi = a[0];
	mini = a[0];
	for(int i = 0; i < n; i++) {
		if( a[i] < mini) {
			mini = a[i];
		}
	}
	cout <<mini<<" ";

	for(int i = 0; i < n; i++) {
		if(a[i] > maxi) {
			maxi = a[i];
		}
	}

	cout <<maxi;

return 0;
}

	