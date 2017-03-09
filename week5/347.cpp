#include <iostream>

using namespace std;

int main () {

	int N, n, s=0;
	cin>>N;
 
	for ( int i=1; i<=N; ++i) {
	cin>>n;

		if ( n==0)  
		s=s+1;
	}
		if ( s==0) { 
		cout<<"NO"<<endl;
	} 
		else {
		cout<<"YES"<<endl;  } 


return 0;
}