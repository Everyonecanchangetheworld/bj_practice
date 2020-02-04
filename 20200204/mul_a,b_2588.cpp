//baekjoon 2588
#include <iostream>
#include <vector>
using namespace std;

int main() {
	int a, b, temp, count = 0;
	vector<int> step;
	cin >> a >> b;
	temp = b;
	while (temp != 0) {
		step.push_back(temp % 10);
		temp = temp / 10;
		count++;
	}
	for (int i = 0; i < step.size(); i++)
		cout << a * step[i] << endl;
	cout << a * b;
}