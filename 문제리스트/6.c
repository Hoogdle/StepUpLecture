// 문제 6. 정수를 입력받아, 해당 정수가 짝수일 경우 정수만큼의 짝수를, 홀수일 경우 정수만큼의 홀수를 출력하는 프로그램을 작성하시오. 단, 짝수는 2부터 시작한다.

// [입력]양의 정수 1개
// [출력]입력된 정수 갯수만큼의 짝수 또는 홀수

//  입력        출력
//  3           1 3 5
//  6           2 4 6 8 10 12
//  1           1


#include <stdio.h>

int main(){
    int num;
    scanf("%d",&num);

    if(num%2==0){
        int value = 2;
        for(int i=0;i<num;++i){
            printf("%d ",value);
            value += 2;
        }
    }
    else{
        int value = 1;
        for(int i=0;i<num;++i){
            printf("%d ",value);
            value += 2;
        }
    }


}