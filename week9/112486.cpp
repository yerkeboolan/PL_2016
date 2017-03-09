#include <iostream>
#include <vector>
#include <algorithm>
 
using namespace std;
 
int main() {
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    int n; cin >> n;
 
    vector <int> v;
 
    for (int i = 0; i < n; ++i) {
        int x; cin >> x;
        v.push_back(x);
    }
 
    sort(v.begin(), v.end());
 
    if (n % 2 == 1)
        cout << v[n / 2];
    else
        cout << v[n / 2 - 1] << " " << v[n / 2];
   
    return 0;
}
 