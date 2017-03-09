#include <iostream>

using namespace std;

int main() {
	
	char c;
	cin >>c;
	if ('a' <= c && c <= 'z') {
	char c = c - ('a' - 'A');
	cout <<c; }
	else {
	cout <<c; }
	return 0;
} 	