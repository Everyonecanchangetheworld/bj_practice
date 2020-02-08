//8958
#include <iostream>
#include <cstdlib>
#include <string.h>
using namespace std;

int main() {
	int testn = 0, stringn = 0, count = 0, total = 0;
	char OXstring[100];
	cin >> testn;

	for (int i = 0; i < testn; i++) {
		cin >> OXstring; // cin 안쓰고 입력받은 string을 
		stringn = strlen(OXstring); // for 문 안쓰고 '/0' 까지 뽑아도 됨
		for (int j = 0; j < stringn; j++) {
			count = 0;
			while (j < stringn && OXstring[j] == 'O') {
				j++;
				count++;
				total += count;
			}
		}
		cout << total <<endl;
		total = 0;
	}

}
			/*
						if(OXstring[j]=='O'){
							count++;
							total+=count;
							if(OXstring[j+1]=='O'){
								j++;
								count++;
								total+=count;
								if(OXstring[j+2]=='O'){
									j++;
									count++;
									total+=count;
								}
							}
							count=0;
						}
						else if (OXstring[j]=='X')
							count=0;
			*/
