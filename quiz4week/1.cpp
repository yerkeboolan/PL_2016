#include <iostream>

using namespace std;

int main() {
	
	int a,b,c;
	cin >>a>>b>>c;
	if (a<b && b<c) {  
	cout <<a<<endl;
	cout <<c; }

	else if (a>b && b>c) {
	cout <<c<<endl;
	cout <<a; }
	             
	else if (b>a && a>c) {
	cout <<c<<endl;
	cout <<b; }	
	
	else if (b<a && a<c) {
	cout <<b<<endl;
	cout <<c; } 

	else if (a == b && c>a) {
	cout <<a<<endl;
	cout <<c; }
	
	else if (a == b && c<a) {
	cout <<c<<endl;
	cout <<a; }
	
	else if (a == c && a>b) {
	cout <<b<<endl;
	cout <<a; }

	else if (a == c && a<b) {
	cout <<a<<endl;
	cout <<b; }

	else if (b == c && b>a) {	
	cout <<a<<endl;
	cout <<b; }
	
	else if (b == c && b<a) {
	cout <<b<<endl;
	cout <<a; }  


	return 0;
       } 