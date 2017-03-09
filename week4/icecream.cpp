#include <iostream>
#include <cmath>

using namespace std;

int main() {

	int a;
	cin >>a;
	if (a == 3 || a == 5) 
	{
		cout <<"YES";
  	}
	else if (a % 3 == 0 || a % 5 == 0) 
	{
		cout <<"YES"; 
	}
	else if (a % 3 == 1) 
	{
		cout <<"YES";
	}
	else if (a % 3 == 2) 
	{                
	 	cout <<"YES";
	}
	else if (a % 5 == 1)
	{
		cout <<"YES";
	}
	else if (a % 5 == 2)
	{
		cout <<"YES";
	}
	else if (a % 5 == 3)
	{
		cout <<"YES";
	}
	else if (a % 5 == 4)
	{
		cout <<"YES";
	} 

	else {
	cout <<"NO"; 
	}
	return 0;
	} 
	                      