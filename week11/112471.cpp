#include <iostream>
#include <set>
 
using namespace std;
 
 
int main() {
    
    string s; cin >> s;
    set <char> S;
 
    for (int i = 0; i < s.size(); ++i) {
        if ('0' <= s[i] && s[i] <= '9') {
            S.insert(s[i]);
        }
    }
 
    if (S.empty()) {
        cout << "NO";
    }
    for (set <char> :: iterator it = S.begin(); it != S.end(); ++it)
        cout << *it;
 
    return 0;
}