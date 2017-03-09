#include <iostream> 
#include "student.h"

using namespace std;

int main() {
	
		freopen("students.txt", "r", stdin);

		int n;
			cin >> n;
	   	Student s[n];
	   	
	   	readAllStudents(s, n);
	   	
	   	printAllStudents(s, n);

	return 0;
	} 