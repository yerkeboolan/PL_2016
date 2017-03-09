#include <iostream>

using namespace std;

int main () {
	int N,s = 0,a = 0,b=0, n;
	cin>>N;

	for ( int i=1; i<=N; i++) {
	cin>>n;

		if ( n==0) {
		s=s+1;
	 }
		if ( n>0) {
		a=a+1;
 	}
		if (n<0)
		{
		b=b+1;
 	}
	}
	cout <<s<<" "<<endl;

	cout <<a<<" "<<endl; 

	cout <<b<<" "<<endl;
return 0;
}