#include <iostream>
using namespace std;
int main(){
    int a;
    cin>>a;
    if(90<=a&&a<=100)
        cout<<"A";
    else if(80<=a&&a<=89)
        cout<<"B";
    else if(70<=a&&a<=79)
        cout<<"C";
    else if(60<=a&&a<=69)
        cout<<"D";
    else
    {
        cout<<"F";
    }
    
}


//c version
// #include <stdio.h>

// int main(){
//     int b;
//     scanf_s("%d",&b);
//     if(90<=b&&b<=100)
//         printf("A");
//     else if(80<=b&&b<=89)
//         printf("B");
//     else if(70<=b&&b<=79)
//         printf("C");
//     else if(60<=b&&b<=69)
//         printf("D");
//     else
//         printf("F");
//     }
// }