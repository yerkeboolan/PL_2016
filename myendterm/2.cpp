#include <iostream>

using namespace std;

int main() {
	
	int n;
	cin >> n;
	int a[n];
	int maxM;
	int k = 0;
	int sum = 0; 
	for(int i = 0; i < n; i++) {
		cin >> a[i];
	}
	maxM = a[0];
	for(int i = 0; i < n; i++) {
		
			if( maxM < a[i]) {
				maxM = a[i];
				k++;	
			}
	if (k > sum) {
		cout <<k;
   	}
 } 

	 return 0;
}
	