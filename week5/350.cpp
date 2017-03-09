#include <iostream>

using namespace std;

int  main () {

	int a,b,c,d,e,k=0;
	cin>>a>>b>>c>>d>>e;
	
	for ( int i = 0; i <= 1000; i++)
	{
		if ( (a*i*i*i + b*i*i + c*i + d)==0 &&  i!=e ) {
		k=k+1; 

	}
	}	
	cout<<k<<endl;

return 0;
} 