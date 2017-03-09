#include <iostream>
#include <cmath> 

using namespace std;


int min2(int a, int b) {
if (a < b) return a;
else return b; }

int min(int a, int b, int c, int d) {
return min2(a, min2(b, min2(c,d)));
}

int main() {
int a,b,c,d;
cin >>a>>b>>c>>d;
cout <<min(a,b,c,d);

return 0; 
} 