#include <stdio.h>

int main(){
    int array[5] = {1,1,1,1,1};
    int result = 0;

    int n1,n2;
    scanf("%d %d",&n1,&n2);

    array[3] = n1;
    array[4] = n2;

    for(int i=0;i<5;++i){
        result += array[i];
    }

    printf("%d",result);
}