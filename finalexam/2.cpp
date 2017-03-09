#include <iostream>
#include <algorithm>
 
using namespace std;
 
int a[100000], q, cnt, cur, res;
 

int main() {
	int n;
	cin >> n;
	for (int i = 1; i <= n; ++i)
		cin >> a[i];

	sort(a + 1, a + 1 + n);
	for (int i = 1; i <= n; ++i) {
		if (a[i] == a[i - 1]) {
			cnt++;
		} else {
			if (cnt > cur) {
				res = a[i - 1];
				cur = cnt;
				q = 0;
			} else {
				if (cnt == cur) {
					q++;
				}
			}
			cnt = 0;
		}
	}
	if (cnt > cur) {
		res = a[n - 1];
		cur = cnt;
		cnt = 0;
		q = 0;
	} else {
		if (cnt == cur) {
			q++;
		}
	}
	if (q > 0) {
		cout << -1;
	} else {
		cout << res;
	}
	return 0;
}	