#include <stdio.h>

int main(){
    int a,b,x;
    scanf("%d %d %d",&a,&b,&x);
    int result = (a*x*x*x - b*x*x + a*x - b) * (a+b);
    printf("%d",result);
}