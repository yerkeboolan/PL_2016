#include <iostream>

using namespace std;

int main() {
	
	int n;
	cin >>n;
	int a[n];
	
	for(int i = 0; i < n; i++) {
		cin >> a[i];
   	}

   	for(int i = 0; i < n; i++) {
   		 if( a[i] != 0) {
   			int j = i;
   			while (a[j-1] == 0 && j > 0) {
   				swap(a[j], a[j-1]);
   				j--;
   			 }
   		 }
   }

   	for(int i = 0; i < n; i++) { 
   cout <<a[i]<<" ";  	
   } 

   
  	
return 0;
}
	
   		 