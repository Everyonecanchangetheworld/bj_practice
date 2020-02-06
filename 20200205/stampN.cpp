//2742
#include<iostream>
using namespace std;
int main() {
    int N;
    cin>>N;
    for(int i = N; i>0;i--){
        cout<<i<<endl;
        cout.tie(NULL);
        ios_base :: sync_with_stdio(false);
    }
}