#include <iostream>
#include <cstdlib>
#include <string.h>
using namespace std;

int main() {
	int testn, count = 0, total = 0, loopn=0;
	char OXstring[100];
	cin >> testn;

	while(testn>loopn) {
		cin >> OXstring; 
		for (int j = 0; j < strlen(OXstring); j++) {
			if(OXstring[j]=='O'){
				count++;
				total += count;
			}
			else if(OXstring[j]=='X')
				count = 0;
		}
		cout << total << endl;
		total = 0;
		count = 0;
		loopn++;
	}
	return 0;

}