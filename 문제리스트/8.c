// 문제 8. 정수값 n을 매개변수로 전달받아 n!을 구하는 순환함수를 작성하려고 한다. n 값은 main() 함수에서 입력받아 순환함수로 전달한다. 
// 순환함수에서 n!을 구하여 반환한다. main() 함수에서 반환값을 전달받아 출력한다.


// [입력]정수값 1개
// [출력]n! 계산 결과


//  입력            출력
//  10              3628800
//  1               1
//  0               1

#include <stdio.h>


int fact(int n){
    if(n==0 || n==1){return 1;}
    return n*fact(n-1);
}

int main(){
    int num;
    scanf("%d",&num);

    printf("%d",fact(num));
}