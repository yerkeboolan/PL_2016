#include <iostream>

using namespace std;

int main() {

	int N;	
	cin >>N;	
	int a[N];
	a[0] = 1;
	a[1] = 1; 
	for (int i = 2; i <= N; i++) {
		if (a[i-1] + a[i+1] == a[i]) {
		cout <<a[i]<<" "; 
	}
} 
cout <<a[N];

 	return 0;
} 