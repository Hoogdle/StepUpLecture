#include <stdio.h>

int main(){
    int n;
    int check;

    scanf("%d",&n);

    if(n%2==0){
        int num = 2;
        for(int i=0;i<n;++i){
            printf("%d ",num);
            num += 2;
        }
    }
    else{
        int num = 1;
        for(int i=0;i<n;++i){
            printf("%d ",num);
            num += 2;
        }
    }

}