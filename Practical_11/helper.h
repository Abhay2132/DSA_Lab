#include<stdlib.h>

void clrscr(){
    system("clear");
}

int strLen(char str[]){
    int len=0;
    while(str[len] != '\0'){
        len += 1;
    }
    return len;
}

int numLen(long int num){
    int len = 0;
    while(num != 0){
        num /= 10;
        len += 1;
    }
    return len;
}

void s(int n){
    while(n--) printf(" ");
}

void printArr(int * arr, int size){
    printf("[");
    for(int i=0; i<size; i++){
        printf("%d", *(arr+i));
        if(i != size -1 ) printf(",");
    }
    printf("]");
}