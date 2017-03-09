#include <iostream>
#include <cmath>

using namespace std;

int main()   {

	int n;
	cin >> n;
	int s = 0;
	int s1 = 0;
	
	

	int a[n][n];

	for(int i = 0; i < n; i++) {
		for(int j = 0; j < n; j++) {
			cin >> a[i][j];
		}
   }

   for(int i = 0; i < n; i++) {
   		for(int j = 0; j < n; j++) {
   			if(i == j) {
   				s += a[i][j];
   			}
   		}
   }


   
  for(int i = 0; i < n; i++) {
  		for(int j = 0; j < n; j++) {
  			if(i + j == n - 1) {
  				s1 += a[i][j];
  			}
  		}
  }	

  int ans = abs(s - s1);


	cout <<ans; 
	return 0;
	}


	