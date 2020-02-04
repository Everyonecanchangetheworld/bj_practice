//baekjoon 2884
#include <iostream>
using namespace std;

int main(){
    int a,b;
    cin>>a>>b;
    if(b-45<0){
        a--;
        if(a<0)
            a=23;
        b=b+60;
    }
    printf("%d %d",a,b-45);
}