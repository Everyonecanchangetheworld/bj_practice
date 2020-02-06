//judge that number is yoon year or not. 2753
#include <iostream>
using namespace std;
int main(){
    int a,judge=0;
    cin>>a;
    if(a%4==0&&a%100!=0||a%400==0)
        judge=1;
    cout<<judge;
}