#include <iostream>
#include <string>
#include <set>

#include <vector>

using namespace std;

string str;
int cnt;

int main() {
	getline(cin, str);
		for(int i = 0; i < str.length(); i++) {
			if(str[i] == ' ') {
				++cnt;
			}
	   	}

	  cout <<cnt + 1 <<endl;
 return 0;
}

