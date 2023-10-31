#include<time.h>
#include<stdio.h>

int main(){

    int sum = 0;
    clock_t start, end;
    start = clock();

    for(int i=0; i<1000000000;i++){
        sum += i-i/2;
    }

    end = clock();

    double time_taken = (double)(end - start)/CLOCKS_PER_SEC;

    printf("%lf s\n\n", time_taken);

    return 0;
}