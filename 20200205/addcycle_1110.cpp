//1110

#include<iostream>
using namespace std;
int main(){
    int a,b,N,count,next_N=0;
    cin>>N;
    a=N/10;
    b=N%10;
    next_N=b*10+(a+b)%10;
    count=1;
    while(next_N!=N){
        a=next_N/10;
        b=next_N%10;
        next_N=b*10+(a+b)%10;
        count++;
    }
    cout<<count;
}