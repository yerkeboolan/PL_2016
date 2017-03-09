#include <iostream>

using namespace std;

int main() {

	char c;
	cin >> c;

	int code = (int)c;

	if(code >= 48 && code <= 57) {        
	cout << "YES";
	} else {
	cout << "NO";
	}

return 0;
}