#include <stdio.h>

int add(int n1,int n2){
    return n1+n2;
}

int main(){
    int n1,n2;

    scanf("%d %d",&n1,&n2);
    printf("%d",add(n1,n2));
}