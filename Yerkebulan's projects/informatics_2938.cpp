#include <iostream>
using namespace std;
int main () 
{ 
    int k, n, c;
    cin >> n;
    cin >> k;
    c = k/n;
    cout <<k-c*n;
    return 0;
}