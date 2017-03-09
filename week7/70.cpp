#include <iostream>

using namespace std;

int main() {
	
	int n;
	cin >>n;
	int a[n];
	for ( int i = 1 ; i <= n; i++) {
		cin >>a[i];
	}
		for (int i = 1; i <= n; i++) { 
		if (i % 2 == 0) {
	 	 int x = a[i];
         int y = a[i-1];
		  a[i] = y;	
		  a[i-1] = x;
		 }
	} 
	   	for ( int i = 1 ; i <= n; i++) {
	   		cout <<a[i]<<" ";
	   	}
	   	return 0;
}

 	