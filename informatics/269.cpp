#include <iostream>
#include <cmath>

using namespace std;

int main() {
	
	int x_1,x_2;
	cin >>x_1>>x_2;
	int y_1, y_2;
	cin >>y_1>>y_2;
	int z_1, z_2;
	cin >>z_1>>z_2;
	double X = sqrt((y_1 - x_1)*(y_1 - x_1) + (y_2 - x_2)*(y_2 - x_2)); 
	double Y = sqrt((z_1 - y_1)*(z_1 - y_1) + (z_2 - y_2)*(z_2 - y_2));
	double Z = sqrt((z_1 - x_1)*(z_1 - x_1) + (z_2 - x_2)*(z_2 - x_2));
	double p = (X+Y+Z)/2;
	double S = sqrt(p*(p-X)*(p-Y)*(p-Z));
	cout <<"The area of triangle is "<<" "<<S;
	return 0;
}