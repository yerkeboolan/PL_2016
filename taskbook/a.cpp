#include <iostream>

using namespace std;

int main() {

	int n,index;
	cin >> n;
	int a[n];
    
		for (int i = 0; i < n; i++) {
			cin >> a[i];
	   }	
	 
	int maxi = a[0];
	index = 0;
	 for (int i = 0; i < n; i++) {
	 	
	 	if (a[i] > maxi){ 
	 		maxi = a[i];
	 		index = i;  
		} 	 
	 
	 }
	 	cout <<maxi<<" "<<index;  
	 return 0;
	 }

	 

	  
	
	   	 

	
