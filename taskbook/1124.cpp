#include <iostream>

using namespace std;

int main() {
	
	int n;
	cin >> n;
	int a[n];
    int s = 1;
	for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    
    for (int i = 0; i < n; i++) {
        if (a[i] > 0) 
            break;
       
        else 
        s *a[i];
        
   }
   cout <<s;
   return 0;
}
