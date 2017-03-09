#include <iostream>
#include <cmath>

using namespace std;

int main() {
	
	int a,b;
	cin >>a>>b;
	int x = (-b)/a;
	if ((-b)/a != 0) {
	cout <<x; } 
	else if (a == 0 && b == 0) {
	cout <<"INF"; } 
	else {
	cout <<"NO"; }
	return 0;
}         	