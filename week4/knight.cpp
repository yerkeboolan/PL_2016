#include <iostream> 


using namespace std;

int main() {

	int x, y, x1, y1;
	cin >>x>>y>>x1>>y1;
	int a = abs(x1 - x);
	int b = abs(y1 - y);
	if ((a == 2 && b == 1) || (a == 1 && b == 2)) {
	cout <<"YES"; }
	else {
	cout <<"NO"; }
	return 0;
} 