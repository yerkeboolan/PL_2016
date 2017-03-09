#include <iostream>

using namespace std;

int main() {

	int a,b,c,d;
	cin >>a>>b>>c>>d;
	for (int i = 1; i <= b; i++) {
	if (i % d == c && i <= b && i >= a) {
	cout <<i<<" "; }
	}
	return 0 ;
	} 
 			