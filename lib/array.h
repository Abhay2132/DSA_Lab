#include<stdlib.h>

int * intArr(int size){
    int * arr = (int *) malloc(sizeof(int) * size);
    return arr;
}

void printArr(int * arr, int size){
    if(size < 0) printf("[]");
    printf("[");
    for(int i=0; i<size; i++){
        printf("%d", arr[i]);
        if(i<size-1) printf(",");
    }
    printf("]");
}
