#include <iostream>

using namespace std;
	
int main() {
	
	int n;
	cin >>n;
	int a[n];
	int s = 0;

	for (int i = 1; i <= n; i++) {
		cin >>a[i];
	}
	for (int i = 1; i <= n;	i++) {
	s += a[i];	
}
	cout << s;
	return 0;
} 
		
	