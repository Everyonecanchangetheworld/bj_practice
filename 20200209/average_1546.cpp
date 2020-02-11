//1546

#include <iostream>
#include <iomanip>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	int N, max = 0;
	double grade[1000], nAver = 0.0, total = 0.0;
	cin >> N;
	for (int i = 0; i < N; i++) {
		cin >> grade[i];
		if (grade[i] > max)
			max = grade[i];
	}
	for (int j = 0; j < N; j++) {
		grade[j] = (grade[j] / max) * 100;
		total += grade[j];
	}
	nAver = (double)total / N;
	cout <<fixed<<setprecision(2) << nAver;

}