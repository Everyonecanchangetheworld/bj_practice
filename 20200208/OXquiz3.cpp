#include <iostream>
#include <cstdlib>
#include <string.h>
using namespace std;

int main() {
	int testn = 0, stringn = 0, count = 0, total = 0;
	char OXstring[100];
	cin >> testn;

	for (int i = 0; i < testn; i++) {
		cin >> OXstring; 
		stringn = strlen(OXstring);
		for (int j = 0; j < stringn; j++) {
			count = 0;
			while (j < stringn && OXstring[j] == 'O' &&OXstring[j]!='\0') {
				j++;
				count++;
				total += count;
			}
		}
		cout << total << endl;
		total = 0;
	}
	return 0;

}