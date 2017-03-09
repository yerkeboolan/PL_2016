#include <iostream>

using namespace std;

struct footballer {

	string sname;
	string name;
	int year;
	int goals;

};

int main() {
	
	int k, m, b;
	
	cin >> k >> m >> b;


	int n;
	cin >> n;
	footballer f[n];
	int sum = 0;
	for(int i = 0; i < n; i++) {
		cin >> f[i].sname >> f[i].name >> f[i].year >> f[i].goals;
	}



	for(int i = 0; i < n; ++i){ 
			if(f[i].year >= k && f[i].year <= m) {
				if(f[i].goals == b) {
				sum++;
					cout <<f[i].sname<<" "<<f[i].name<<endl; 
				}
		   }

   }
  	cout <<sum;


return 0;
}





                    













      
