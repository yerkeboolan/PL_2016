#include <iostream>
#include <cmath>

using namespace std;

int main() {
	
	int a,b,x;
	cin >>a>>b;
	if (b == 0 && a == 0) {
	cout << "INF"; } 
	else if (a == 0) { 
	cout << "NO"; } 
	else if (abs(b) % abs(a) == 0) { 
	cout << -b / a; } 
	else {
 	cout << "NO"; }
	return 0;
}  
	
	