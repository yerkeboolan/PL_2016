#include <iostream>

using namespace std;

int main() {
	
	int n;
	cin >>n;
	int a[n];
	int s =0;
	for (int i = 1; i <= n; i++) {
		cin >>a[i];
	} 
	for (int i = 2; i <= n;	i++) {
		if ((a[i] < 0 && a[i-1] < 0) || (a[i] > 0 && a[i-1] > 0))
		s++;
		
	} 
	if (s > 0) {
		cout <<"YES";
	}
		else {
		cout <<"NO";
		} 
	return 0;
  } 
                 