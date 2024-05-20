// 문제 10. [15, 29, 3, 46, 22]로 초기화 된 배열에서 가장 큰 수와 가장 작은 수를 찾아 두 원소의 위치를 바꾸는 프로그램을 작성하려고 한다. 
// 배열은 main() 함수에서 선언하고 초기화한다. 배열의 두 원소를 찾아 바꾸는 기능은 exchange() 함수에서 실행한다. 
// 두 원소의 위치가 바뀐 후 배열의 출력은 main() 함수에서 한다.


// [입력]없음
// [출력]가장 큰 수와 가장 작은 수의 위치가 바뀐 배열

//  입력            출력
//                  15 29 46 3 22


#include <stdio.h>


void exchange(int array[],int size){
    int max_index,min_index;
    max_index = 0;
    min_index = 0;

    for(int i=0;i<size;++i){
        if(array[min_index]>array[i]){min_index = i;}
        if(array[max_index]<array[i]){max_index = i;}
    }

    int temp = array[max_index];
    array[max_index] = array[min_index];
    array[min_index] = temp;
}

int main(){
    int array[5] = {15,29,3,46,22};
    exchange(array,5);
    for(int i=0; i<5; ++i){
        printf("%d ",array[i]);
    }

}