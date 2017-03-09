#include <iostream>

using namespace std;


int main(){
		
	int n;
	cin >> n;
	int s = 0;
   	for(;n > 0;){
   		int k = n % 10;
   		s += k;
   		n /= 10;
   	} 

   	cout << s;

return 0;
}