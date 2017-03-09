#include <iostream>

using namespace std;

int main() {

	int n;
	cin >> n;
	int a[n];
	int mini;
	 
	
		
	for(int i = 0; i < n; i++) {
		cin >> a[i];
	}
 
	for(int i = 0; i <= n; i++) {
		if (a[i] > maxi) {
			maxi = a[i];
			index = i;
	   	} 
	}
	cout <<index; 
	
	return 0;
	}


	

