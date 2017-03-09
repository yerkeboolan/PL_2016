#include <iostream>
    
using namespace std;
    
int t (int x, int y, int c) {
return 1;
}
 
 int f (int x, int y, int c) {
 return 0;
 }

    int main () {
    int a,b,c;
    cin>>a>>b>>c;

    if ( (a==0 && b==0)  || ( a==0 && c==0) || (b==0 && c==0 ) )
    cout<<f(a,b,c)<<endl;

    else
    cout<<t(a,b,c)<<endl; 

    return 0;
     }
     

	