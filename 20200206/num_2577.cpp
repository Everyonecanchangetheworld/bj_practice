//number's number 2577

#include<iostream>
using namespace std;

int main() {
	int A, B, C, result,temp,count=0;
	int num[100], num_result[10] = { 0, };
	cin >> A >> B >> C;
	result = A * B * C; // 17037300
	temp = result;
	while (temp != 0) {
		temp = temp / 10;
		count++;
	}
	for (int i = 0; i < count; i++) {
		num[i] = result % 10;
		num_result[num[i]]++;
		result = result / 10;
	}
	for (int j = 0; j < 10; j++)
		cout << num_result[j] << "\n";
}