// add number for each. 11720

#include <iostream>

using namespace std;
int main(){
    int N,total = 0;
    char Narray[101];
    cin>>N;
    cin>>Narray;
    for(int i = 0 ; i<N;i++)
        total+=(Narray[i]-'0');

    cout<<total;

}