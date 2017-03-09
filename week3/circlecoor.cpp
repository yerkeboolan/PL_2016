#include <cstdlib>
#include <iostream>
 
using namespace std;
 
int main() {
    cout << "Enter the coordinates of the center of the circle:" << endl;
    int Xc, Yc;
    cin >> Xc >> Yc;
    cout << "Enter the radius " << endl;
    int r;
    cin >> r;
    cout << "Enter the coordinates of the point:" << endl;
    int x, y;
    cin >> x >> y;
    if (((x - Xc) * (x - Xc) + (y - Yc) * (y - Yc)) < r * r) {
        cout << "Point belongs to the circle." << endl;
    } else if (((x - Xc) * (x - Xc) + (y - Yc) * (y - Yc)) <= r * r) {
        cout << "It lies on the circumference." << endl;
    } else {
        cout << "The point does not belong to the circle." << endl;
    }
 
    return 0;
}