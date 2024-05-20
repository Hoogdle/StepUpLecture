// 문제 3. 시험 점수를 입력했을 때, 해당 점수에 맞는 성적을 A~F까지 출력하는 프로그램을 작성하시오. 

// 점수기준         학점
// 100~90           A
// 89~80            B
// 79~70            C
// 69~60            D
// 59~50            E
// 49미만           F


// 입력             출력
// 85               B
// 60               D
// 59               E


#include <stdio.h>

int main(){
    int score;
    scanf("%d",&score);

    if(score>=90){printf("A");}
    else if(score>=80){printf("B");}
    else if(score>=70){printf("C");}
    else if(score>=60){printf("D");}
    else if(score>=50){printf("E");}
    else {printf("F");}
}