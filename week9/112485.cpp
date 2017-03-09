#include <iostream>
#include <vector>
using namespace std;
 
vector <int> v, s, e;
 
int main() {
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    int x;
    while (true) {
        cin >> x;
        if (x == 0)
            break;
        v.push_back(x);
    }
    int n = v.size();
    int m = n / 2;
    for (int i = 0; i < m; ++i) {
        s.push_back(v[i]);
    }
    for (int i = m; i < n; ++i) {
        e.push_back(v[i]);
    }
    for (int i = 0; i < m; ++i) {
        int j = m - i - 1;
        if (i < j) {
            int a = s[i], b = s[j];
            s[i] = b;
            s[j] = a;
        }
    }
    for (int i = 0; i < m; ++i) {
        int j = m - i - 1;
        if (i < j) {
            int a = e[i], b = e[j];
            e[i] = b;
            e[j] = a;
        }
    }
    v.clear();
    for (int i = 0; i < m; ++i)
        v.push_back(s[i]);
    for (int i = 0; i < m; ++i)
        v.push_back(e[i]);
    for (int i=0;i<n;++i)
        cout<<v[i] <<" ";
    return 0;
}
