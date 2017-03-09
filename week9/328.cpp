0#include <iostream>

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
	cin >> n;
	double avg, avg1, avg2; 
	double sum = 0, sum1 = 0, sum2 = 0;
	student s[n];
	 
	for(int i = 0; i < n; i++) {
		cin >> s[i].sname>> s[i].name>> s[i].math>> s[i].fiz>> s[i].inf;
	}

	

	for(int i = 0; i < n; i++) {
		sum += s[i].math;
		sum1 += s[i].fiz; 
		sum2 += s[i].inf;
		avg = sum/n;
		avg1 = sum1/n;
		avg2 = sum2/n;
	}

cout <<avg<<" "<<avg1<<" "<<avg2;

return 0;
}




	                                     