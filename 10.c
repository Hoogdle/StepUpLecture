#include <stdio.h>

void exchange(int array[],int size){
    int small_i = 0;
    int big_i = 0;
    int temp;

    for(int i=0;i<size;++i){
        if(array[i]>array[small_i]){small_i = i;}
        if(array[i]<array[big_i]){big_i = i;}
    }

    temp = array[small_i];
    array[small_i] = array[big_i];
    array[big_i] = temp;
}

int main(){
    int array[5] = {15,29,3,46,22};

    exchange(array,sizeof(array)/sizeof(array[0]));

    for(int i=0;i<sizeof(array)/sizeof(array[0]);++i){
        printf("%d ", array[i]);
    }

}