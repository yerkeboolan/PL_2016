#include <iostream>
 
using namespace std;
 
int n;
int a[11][11];
 
bool fill(int x, int y, int val, int dst) {
    if (x < 1 || y < 1 || x > n || y > n || a[x][y] != 0) return false;
    a[x][y] = val;
    if (dst == 1)
        if (!fill(x, y + 1, val + 1, 1))
            fill(x + 1, y, val + 1, 2);
    if (dst == 2)
        if (!fill(x + 1, y, val + 1, 2))
            fill(x, y - 1, val + 1, 3);
    if (dst == 3)
        if (!fill(x, y - 1, val + 1, 3))
            fill(x - 1, y, val + 1, 4);
    if (dst == 4)
        if (!fill(x - 1, y, val + 1, 4))
            fill(x, y + 1, val + 1, 1);
}
 
int main() {
    cin >> n;
    fill(1, 1, 1, 1);
    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j <= n; ++j) {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}