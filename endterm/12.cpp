#include <iostream>
#include <vector>

using namespace std;

vector <int> v2;
vector <int> v;

int main() {
		freopen("input.txt", "r", stdin);
	int n;
	cin >> n;
	for(int i = 0; i < n; i++) {
		int x;
		cin >> x;
		if(x == 0) {
			v.push_back(x);
		}

		else {
			v2.push_back(x);
	   	}
	}

	for(int i = 0; i < v2.size(); i++) {
		cout <<v2[i] <<" ";
	}

	for( int i = 0; i < v.size(); i++) {
		cout <<v[i]<<" ";
	}

	cout <<endl;

return 0;
}

