#include <iostream>
#include <math.h>
#include <iomanip>
using namespace std;
int main () 
{
    double a,b,c;
    cout << "please enter a right angle a: ";
    cin >> a;
    cout <<"Please enter a right angle b: ";
    cin >> b;
    c = sqrt(a*a + b*b);
    cout <<"result of c=" << fixed<< setprecision(2)<< c<< endl;
    return 0;
}