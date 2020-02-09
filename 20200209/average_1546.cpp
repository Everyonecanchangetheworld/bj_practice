//1546

#include <iostream>

using namespace std;

int main(){
    int N,max=0;
    double grade[1000],nAver=0.0,total=0.0;
    cin>>N;
    for(int i=0;i<N;i++){
        cin>>grade[N];
        if(grade[N]>max)
            max=grade[N];
    }
    for(int j=0;j<N;j++){
        grade[N]=grade[N]/max * 100;
        total+= grade[N];
    }
    nAver=total/N;
    cout<<nAver;

}