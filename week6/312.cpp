#include <iostream>

using namespace std;



		double fi(int n){
        if(n==0) return 1;
        if(n==1)return 1;
    	return fi(n-1)+fi(n-2);
    	}
   
int main() {
    double a,n;
    cin >> n;
    cout << fi ( n ) << endl;
    return 0;
}
