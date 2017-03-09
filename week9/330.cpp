#include <iostream>

using namespace std;

struct student {

	string sname;
	string name;
	int math;
	int fiz;
	int inf;
};

int main() {
		
	int n; 
	cin >>n;
	double avg, avg1;
	  
	student b[n];

	for(int i = 0; i < n; i++) {
		cin >> b[i].sname>> b[i].name>> b[i].math>> b[i].fiz>> b[i].inf;
	}

	for(int i = 0; i < n-1; i++) {
		avg = (b[i].math + b[i].fiz + b[i].inf)/3;
		avg1 = (b[i+1].math + b[i+1].fiz + b[i+1].inf)/3;
		if (avg > avg1) {
			swap(b[i].sname, b[i+1].sname);
			swap(b[i].name, b[i+1].name);
				 
		cout <<b[i].sname<<" "<<b[i].name<<endl;
		}
	}

return 0;
}


	
		