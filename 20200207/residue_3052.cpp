//3052 different residue
#include <iostream>

using namespace std;

int main() {
	int differ, A, count = 0,Res[100];
	for (int i = 0; i < 10; i++) {
		cin >> A;
		Res[i] = A % 42;
		for (int j = i-1; j >= 0; j--) {
			if (Res[i] == Res[j]) {
				count++;
				break;
			}
		}
	}
	differ = 10 - count;
	cout << differ;

}