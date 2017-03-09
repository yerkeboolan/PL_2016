#include <iostream>


using namespace std;
		long long fact(int z)
		{
 		long long c = 1;
 			for(int i = 2; i <= z;i++)
 			{
  		c*=i;
 		}
		return c;
		}
		int main(){
		long long n,k;
		cin>> n>> k;
			long long res = fact(n)/(fact(k)*fact(n-k));
		cout<<res;
		return 0;
		}
			 