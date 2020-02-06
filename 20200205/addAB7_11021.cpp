//11021,11022

#include <iostream>
using namespace std;
int main(){
    int T,a,b;
    cin>>T;
    for(int i=1;i<T+1;i++){
        ios_base :: sync_with_stdio(false);
        cin.tie(NULL);
        cout.tie(NULL);
        cin>>a>>b;
        cout<<"Case #"<<i;
        cout<<": "<<a<<" + "<<b<<" = "<<a+b<<"\n";
    }
}