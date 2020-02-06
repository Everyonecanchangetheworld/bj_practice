//2438
// #include <iostream>
// using namespace std;
// int main() {
// 	int T;
// 	cin >> T;
// 	for (int i = 1; i < T + 1; i++) {
// 		for (int j = i; j > 0; j--){
//             ios_base::sync_with_stdio(false);
//             cout.tie(NULL);
//             cout << "★";
            
//         }
			
// 		for (int k = T - i; k > 0; k--){
//             ios_base::sync_with_stdio(false);
//             cout.tie(NULL);
// 			cout << " ";
//         }
//         ios_base::sync_with_stdio(false);
//         cout.tie(NULL);
// 		cout << "\n";
// 	}

// }

//알고보니 별이 문제였네 ^^..
#include<stdio.h>
int main() {
	int T,i,j;
	scanf("%d", &T);
	for (i = 1; i < T + 1; i++) {
		if (i != 1)
			printf("\n");
		for (j = 1; j <= i; j++)
			printf("*");
		
	}
}