#include<stdlib.h>

void _clr(){
    system("clear");
}

void _wait(){
    system("read a");
}

int readInt(){
    char a[10];
    scanf("%s", a);
    return atoi(a);
}