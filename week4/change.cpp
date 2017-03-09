#include <iostream>
#include <cmath>

using namespace std;

int main() {

	int a,b,c,d;
	cout <<"The dollar of product:"<<endl;
	cin >>a;
	cout <<"The cent of product:"<<endl;
	cin >>b;
	cout <<"Someone paid (dollar):"<<endl;
	cin >>c;
	cout <<"Someone paid (cent):"<<endl;
	cin >>d;         	
	if (a<c && b<d) {
	int e = c-a;
	int f = d-b;
	cout <<"The change is:"<<endl<<e<<" "<<"dollar"<<"   "<<f<<"  "<<"cent"; } 
	else {
	cout <<0<<" "<<0; }
	return 0;
} 