//baekjoon 2588

#include <stdio.h>

int main(){
    int a,b,temp;
    scanf("%d %d",&a,&b);
    temp=b;
    while(temp!=0){
        printf("%d\n",a*(temp%10));
        temp/=10;
    }
    printf("%d",a*b);
}

