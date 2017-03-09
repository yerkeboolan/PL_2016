#include <iostream>
    
using namespace std;

    int main () {

        int   i = 0;
        double y,x, x1, y1, p;
        cin>>x>>p>>y;
        x1=x*100;
        y1=y*100;
       
        while (x1<y1) {
            x1=int((p/100 + 1)*x1);
                i++;
       
        }
     
           
        cout<< i <<endl;
        return 0;
    }
     
