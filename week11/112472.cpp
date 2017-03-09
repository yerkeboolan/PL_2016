#include <iostream> 
#include <set>

using namespace std;

int main() {

	string m;
	cin >> m;
	set <char> M, q;
    for (int i = 0; i < m.size(); i++) {
        if (m[i] >= '0' && m[i] <= '9') {
			if (M.count(m[i]))
            {
                q.insert (m[i]);
            }
            M.insert (m[i]);
	  }
	  if (q.size() == 0) {
	  cout <<"NO";
	  } 
   } 
    for (set <char> :: iterator it = q.begin(); it != q.end(); ++it)
        cout << *it;
   return 0;
   } 
