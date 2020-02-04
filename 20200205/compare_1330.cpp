//1330 backjoon c, c++ is same way

#include <iostream>

using namespace std;

int main(){
    int a,b;
    char result[5];
    cin>>a>>b;
    if(a>b){
        result[0]='>';
        cout<<result;
    }
    else if(a<b){
        result[0]='<';
        cout<<result;
    }
    else if(a==b){
        result[0]='=';
        result[1]='=';
        cout<<result[0]<<result[1];
    }
    
}