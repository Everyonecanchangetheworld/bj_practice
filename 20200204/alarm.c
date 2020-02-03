//baekjoon 2884
#include <stdio.h>

int main(){
    int a,b;
    scanf("%d %d",&a,&b);
    if(b-45<0){
        a--;
        if(a<0)
            a=23;
        b=b+60;
    }
    printf("%d %d",a,b-45);
}