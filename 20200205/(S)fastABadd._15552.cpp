//15552 using sync_with_stdio

#include <iostream>
using namespace std;
int main(){
    int T,a,b;
    cin>>T;
    for(int i=0;i<T;i++){
        ios_base :: sync_with_stdio(false);
        cin.tie(NULL);
        cout.tie(NULL);
        cin>>a>>b;
        cout<<a+b<<"\n";
    }
}