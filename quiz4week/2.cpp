#include <iostream>

using namespace std;

int main() {
	
	int a,b,c;
	cin >>a>>b>>c;

	if (a == b && a == c) {
	cout <<3; }

	else if (b == a && b == c) {
	cout <<3; }

	else if (c == a && c == b) {
	cout <<3; }

	else if (a == b && a != c) {
	cout <<2; }
	
	else if (a != b && a == c) {
	cout <<2; }
	
	else if (b == a && b != c) {
	cout <<2; }
	
	else if (b != a && b == c) {
	cout <<2; }
	
	else if (c == a && c != b) { 
	cout <<2; }
	
	else if (c != a && c == b) {
	cout <<2; }

	else {
	cout <<0; }

	return 0;
} 