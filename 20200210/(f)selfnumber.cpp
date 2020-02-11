//4673 self number by D.R. kaprekar

#include <iostream>
using namespace std;

int selfNumber(int x){
    return x + x/10 + x%10;
}

int main(){
    int result;
    result = selfNumber(75);
    cout << result;
}