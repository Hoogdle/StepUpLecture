// 문제 2. 세 정수 a, b, x의 값을 입력받아, 아래 수식을 계산하여 출력하는 프로그램을 작성하시오.
// (ax^3- bx^2+ ax - b) * (a + b)

// 입력             출력
// 3 4 5            2002
// 7 6 12           147030
// 3 -2 7           1150

#include <stdio.h>

int main(){
    int a,b,x;

    scanf("%d %d %d",&a,&b,&x);
    int result = ((a*x*x*x) - (b*x*x) + (a*x) -b) * (a+b);
    printf("%d",result);
}