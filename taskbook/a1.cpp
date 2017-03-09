#include <iostream>

using namespace std;

int main () {

	int n, m;
	cin >> n, m;
	int a[n][m];

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cin >> a[i][j];
	}
	}

	int n;
	cin >> n;
	int x[n];

	for (int i = 0; i < n; i++) {
        cin >> x[i];

    }
    for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
		if (i % 2 != 0) {
            a[i][j] = x[j]; 

         } 
         else cout << a[i][j] ;


         }
	
	     }




	         for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
		 cout << a[i][j] ;


         }
         }
         
     }
