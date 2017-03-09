#include <iostream>
 
using namespace std;

int main () {
	int N, n;
	cin>>N;
	long long s=0;
	for ( int i=1; i<=N ; i++)
	{
	cin>>n;
	s=s+n;
	}
 
cout<<s<<endl; 

return 0;
}