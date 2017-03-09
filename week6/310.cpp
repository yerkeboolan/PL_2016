#include <iostream>

using namespace std;

bool prime(long long x) {
	for (int i = 2; i * i < x; ++i)
		if (x % i == 0)
			return false;
	return true;
}

int main() {
	long long n; 
	cin >> n;
	if (prime(n))
		cout << "prime";
	else
		cout << "composite";
	return 0;
}