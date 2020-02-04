//20200205 baekjoon1463 fail.

#include <iostream>

using namespace std;

int main(){
    int X,count=0;
    cin>>X;
    while(X>1){
        if(X%3==0){
            X=X/3;
            count++;
        }
        
        else if(X%2==0){
            X=X/2;
            count++;
        }
        else
        {
            X--;
        }
        

    }
    cout<<count;
}