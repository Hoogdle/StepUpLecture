// 문제 5. 두 정수 n과 m을 입력 받아, 한 줄에 m개의 ‘*’ 문자를 총 n줄만큼 출력하는 프로그램을 작성하라.

// [입력]정수 n, m
// [출력]*로 구성된 여러 개의 줄

//  입력        출력
//  3 5         *****
//              *****
//              *****

#include <stdio.h>

int main(){
    int n1,n2;

    scanf("%d %d",&n1,&n2);

    for(int i=0;i<n1;++i){
        for(int j=-0;j<n2;++j){
            printf("*");
        }
        printf("\n");
    }
}