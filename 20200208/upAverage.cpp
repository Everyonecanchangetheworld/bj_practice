//4344

#include <iostream>
#include <stdlib.h>
#include <iomanip> //for setprecision
using namespace std;

int main() {
	int Testcase, studentN, gradeAverage, gradeTotal = 0, upperStudent = 0;
	int student[1001];
	double rateOfstudents;
	cin >> Testcase;
	for (int i = 0; i < Testcase; i++) {
		cin >> studentN;
		for (int j = 0; j < studentN; j++) {
			cin >> student[j];
			gradeTotal += student[j];
		}
		gradeAverage = gradeTotal / studentN;
		for (int k = 0; k < studentN; k++) {
			if (student[k] > gradeAverage)
				upperStudent++;
		}
		rateOfstudents = (static_cast<double>(upperStudent)/studentN);
		cout << fixed << setprecision(3) << rateOfstudents * 100 << "%" << endl;
		gradeTotal = 0;
		upperStudent = 0;
	}

}