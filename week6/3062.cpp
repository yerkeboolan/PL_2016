#include <iostream>

using namespace std;

    int main () {

    int  i=1;
    double x,y;
    cin>>x>>y;

    while (x<y) {
    x += 0.1*x;
    i++;
    }
    cout<<i<<endl;
    return 0;
    }
