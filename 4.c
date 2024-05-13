#include <stdio.h>

int main(){
    int num;
    int result = 0;
    while(1){
        scanf("%d",&num);
        if(num==0){break;}
        if(num%3==0){result+=num;}
        else{result+=(num%3);}
    }
    printf("%d",result);
}