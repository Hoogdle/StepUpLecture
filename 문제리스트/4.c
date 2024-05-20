//문제 4. 0이 입력될 때까지 정수를 입력받아, 합을 구하여 출력하는 프로그램을 작성하라

// [입력]정수 n
// [출력]3의 배수의 합과 나머지의 합


// 입력             출력
// 3 6 9 0          18
// -3 -18 0         -21 
// 0                0

#include <stdio.h>

int main(){
    int result = 0;
    int value;

    while(1){
        scanf("%d",&value);
        if(value==0){break;}
        result += value;
    }
    printf("%d",result);
}