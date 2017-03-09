#include <iostream>
#include <algorithm>


using namespace std;


int main() {

	string str, str1 = "";
	cin >> str;

	for(int i = str.length()-1; i >=0; i--) {
		str1 += str[i]; }

	if(str == str1) {
		cout <<"YES";
	}
	else {
		cout <<"NO";
	}
return 0;
}
