#include <iostream>

using namespace std;

int main() {

	int n, index;
	cin >>n;
	int a[n];

		for (int i = 0; i < n; i++) {
			cin >> a[i];
		}
		int mini = a[0];
		index = 0; 
		for (int i = 0; i < n; i++) {
	 
			if (a[i] < mini) {
				mini = a[i];
				index = i; 
		  	}
}                           
		cout << mini<<" "<<index;
		return 0;

}

	
				