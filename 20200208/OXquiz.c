/*
8958

this is failure version 
Because when I receive string by 'scanf' to OXstring
OXstring length is wrong far above intention.
and OXstring[j] != '\0'  this sentence is not working well
I dont know why now.. 
In internet , there is no exact information about this
*/
#include <stdio.h>

int main() {
	int testn = 0, stringn = 0, count = 0, total = 0;
	char OXstring[100];
    char *OXtext;
	scanf("%d",&testn);

	for (int i = 0; i < testn; i++) {
		scanf("%s",OXtext);
        strcpy(OXstring,OXtext);
		stringn = strlen(OXstring);
		for (int j = 0; OXstring[j]!='\0'; j++) {
			count = 0;
			while (j < stringn && OXstring[j] == 'O') {
				j++;
				count++;
				total += count;
			}
		}
        printf("%d\n",total);
		total = 0;
	}

}