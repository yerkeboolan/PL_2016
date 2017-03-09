	#include <iostream>
#include <cmath> 

using namespace std;

int main() {

	int n;		
	cin >>n;
	int s = 1;
	int c = 1;
	for (int i = 1; i <= n; i++) {
		c = 2*c;
		s = s + c; 
	
		
	} 
	cout << s << endl;
	return 0;
} 