//success _ 2562
#include <iostream>
//#include <math.h>
//#include <cstdlib>
//#include <ctime>

using namespace std;


#include <iostream>
using namespace std;

int main() {
	int max=0, index=1;
	int root[100];
	for (int k = 1; k < 10; k++) {
		cin >> root[k];
		if (max < root[k]) {
			max = root[k];
			index = k;
		}
	}

    // this code can't .. but I don't know why

    // for (int i = 1 ; i < 10 ; i++){
    //     cin>> root[i];
    // }
    // max = root[1];
    // for (int k = 1 ; k < 10 ; k++){
    //     if(max < root[k]){
    //         max = root[k];
    //         index = k;
    //     }
    // }

	cout << max << "\n" << index;

}