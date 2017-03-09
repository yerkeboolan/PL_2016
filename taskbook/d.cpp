#include <iostream>

using namespace std;

int main() {

	int n;
	cin >> n;
	int a[n];

	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	int index;
	for(int i = 0; i < n; i++) {
		if(a[i] == 0) 
		index = i;
		cout <<a[i]<<" "<<index;
		break;
		}
		return 0;
	}
		
