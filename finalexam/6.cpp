#include <iostream>

using namespace std;

string s;
int ans;

int main() {
	cin >> s;
	for (int i = 0; i < s.length(); i++) {
		if (s[i] == 'a')
			ans++;
		if (s[i] == 'e')
			ans++;
		if (s[i] == 'i')
			ans++;
		if (s[i] == 'o')
			ans++;
		if (s[i] == 'u')
			ans++;
	}

	cout << ans;

	return 0;
}
