#include <iostream>

using namespace std;

int main() {
	
	int n, m;
	cin >> n >> m;
	double a[n][m];
	double sum = 0;
	double k;
	for(int i = 0; i < n; i++) {
		for(int j = 0; j < m; j++) {
			cin >> a[i][j]; 
			sum += a[i][j];
		}
   	}
   	k = sum/(n*m);
   	cout <<k;
   	cout<<endl; 
   	for(int i = 0; i < n; i++) {
   		for(int j = 0; j < m; j++) {
   			if(a[i][j] < k) {
   				a[i][j] = 0;
            }
            else {
                a[i][j] = 255;
            }
            cout <<a[i][j]<<" ";
        }
        cout <<endl; 
    }
     
return 0;
}

   					