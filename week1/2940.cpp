#include <iostream>

using namespace std;

int main() {
	
	int v,t;
	cin >>v>>t;
	int s = 109;
	int l;
	l = v*t; 
		if (l > s) {
		cout <<l-s;
	}
	else `if (l < s) {
		cout<<s+l; 
	}
		
	if (v < 0) {	
		cout <<s+l; 
   	}

return 0;
}





	