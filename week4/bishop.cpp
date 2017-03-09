#include <iostream>

using namespace std;

int main() {
	
	int x, x1, y, y1;
	cin >>x>>y>>x1>>y1;
	if (abs(x1-x) == abs(y1-y)) {
		cout <<"YES"; 
	}
	else {
		cout <<"NO"; 
	}
	return 0;
}



 