#include <iostream>
#include <cmath>


using namespace std;


int main(){
	int n;
	cin >> n;

	int a = 1, b = 1;
	int i = 3;
	while (i <= n) {
		int t = b;
		b = a + b;
		a = t;
		++i;
	}
	cout << b;
	return 0;	
}  	





































// i - 2 i - 1
// a     b

// i - 1 i
// b     a + b
// t = b
// t     a + b

