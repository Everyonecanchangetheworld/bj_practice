//10818

#include <iostream>
using namespace std;

int main() {
    int N,number,min=1000000,max=-1000000;
    cin >> N;
    for(int i = 0 ; i<N ; i++){
        cin >> number;
        if(min>number)
            min = number;
        if(max<number)
            max = number;
    }
    cout << min <<" " << max;
}