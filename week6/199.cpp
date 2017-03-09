#include <iostream>

using namespace std;

	int nd;
	int nod(int a,int b)
	{
 	if(b==0) nd=a;	
	 else
 	nd=nod(b,a%b);
	return nd;
	}
		int main()
		{		
		int x,y;
		cin>>x>>y;
		cout<<nod(x,y);
		return 0;
		}
 