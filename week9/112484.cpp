#include <iostream>
#include <vector>
using namespace std;
 
vector <int> v;
 
int main() {
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    int n; cin >> n;
    for (int i = 0; i < n; ++i) {
        int x; cin >> x;
        v.push_back(x);
    }
    for (int i = 0; i < n; ++i) {
        int j = n - i - 1;
        if (i < j) {
            int a = v[i], b = v[j];
            v[i] = b;
            v[j] = a;
        }
    }
   
    for (int i=0;i<n;++i)
    cout<<v[i] <<" ";
    return 0;
}