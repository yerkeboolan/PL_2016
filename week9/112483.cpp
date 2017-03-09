#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main() {
   
        freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
 
    int a;
    vector < int > v;
        while(a!=0){
        cin >>a;
        if (a!=0)  
        v.push_back(a);  
    }
    sort ( v.begin(), v.end());
    for ( int i = 0; i < v.size(); ++i){
        cout <<  v[i] << " ";
    }
return 0;
}
 

