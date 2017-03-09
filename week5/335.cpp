#include <iostream>
#include <cmath>

using namespace std;

	int main () {
	int a,b;

	cin>>a>>b;
	
	for ( int i = a; i<=b; i++)
 	{ 
		int t = (int) sqrt (i);

		if ( t*t == i ) {
			cout<<i<<" " <<endl; }
	}     

return 0;

}
 
 