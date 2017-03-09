#include <iostream>
#include <cmath>

using namespace std;

int main() {
	
	int x, y, x1, y1;
	cin >>x>>y>>x1>>y1;

        int a = abs(x1 - x);
	int b = abs(y1 - y);

	if (abs(x1-x) == abs(y1-y)) {
	cout <<"YES"; }
	
	else if (x == x1 || y == y1) {
	cout <<"YES"; }

	
	else if  (((a == 1 && b == 0) ||  (a == 0 && b == 1)) || (a == 1 && b == 1)) {
	cout <<"YES"; }
	
	else {
	cout <<"NO"; }
	return 0;
} 