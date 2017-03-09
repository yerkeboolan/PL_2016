#include <iostream>

using namespace std;

int main() {

	int n, m;
	cin >> n >> m;  
	int a[n][m];
	int maxS = 0;
	int s = 0;
	int index = 0; 

        for(int i = 0; i < n; i++) {
        	for( int j = 0; j < m; j++) {
        		cin >> a[i][j];
        	}
        }
        for(int i = 0; i < n; i++) {
        	s = 0;
        	for( int j = 0; j < m; j++) {
        		s += a[i][j];
        	} 
          	if (s > maxS) {
          		maxS = s;
          		index = i;
           }
        }
        cout <<maxS<<endl<<index; 
return 0;
}



    		