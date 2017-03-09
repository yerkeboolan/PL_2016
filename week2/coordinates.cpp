#include <cmath>
#include <iostream>
 
using namespace std;
 
int main() {
    	int x_1, y_1;
	cin >>x_1>>y_1;
	int x_2, y_2;
	cin >>x_2>>y_2;
	double X = sqrt((x_2 - x_1)*(x_2 - x_1)+(y_2 - y_1)*(y_2 - y_1));
	cout <<"The length is "<<" "<<X;
	return 0;
} 