#include <stdio.h>

int recursive(int n){
    if(n==1){return n;}
    else{
        return n*recursive(n-1);
    }
}

int main(){
    int n;
    scanf("%d",&n);
    printf("%d",recursive(n));
}