#include <iostream>

using namespace std;

int main() {

	int A;
	cin >> A;
	
	int a = 1;
	int b = 1;
	int i = 2;	
	while (b != A) {
    if (b > A) {
        cout <<"-1";
        return 0;
   }
   int t = b;
		b = a + b;
		a = t;
		++i;
  	} 
	
	cout <<i<<endl;
	return 0;
} 	


