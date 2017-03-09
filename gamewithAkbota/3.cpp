#include <iostream> 
#include <cmath>
#include <algorithm>
using namespace std;
int main () {
		
	freopen ("input.txt", "r", stdin);
	freopen ("output.txt", "w", stdout);
	string s, a;
	a=s;
	for (int i=0; i<1000; i++) {
		reverse(s.begin(), s.end());
	}
   if (a==s) {
   	cout<<"Yes";
   }
   else {
   	cout<<"No";
   }
	
	
	return 0;
	
}
