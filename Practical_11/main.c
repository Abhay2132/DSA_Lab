#include<stdio.h>
#include<stdlib.h>
#include "helper.h"

int * create(int * arr, int * size);
void linear(int * arr, int size);

int main(){
    int * arr = (int *) malloc(sizeof(int));
    int size = 0;
    while(1){
        clrscr();
        int ch;
        printf("\t\t ARRAY SORT AND SEARCH \n");
        printf("\n arr : ");
        printArr(arr, size);

        printf("\n\n Choose an Operation :- \n");
        printf("\n 1.) Create");
        printf("\n 2.) Linear Search");
        printf("\n 3.) Binary Search");
        printf("\n 4.) Bubble Sort");
        printf("\n 5.) Insertion Sort");
        printf("\n 6.) Selection Sort");
        printf("\n 7.) Quick Sort");
        printf("\n\n 9.) EXIT");
        printf("\n >> ");
        scanf("%d", &ch);
        if(ch == 9) break;
        switch (ch)
        {
            case 1: arr = create(arr, &size); break;
            case 2: linear(arr, size); break;
            // case 3: size = create(arr); break;
            // case 4: size = create(arr); break;
            // case 5: size = create(arr); break;
            // case 6: size = create(arr); break;
            // case 7: size = create(arr); break;
        }
    }

    return 0;
}

int * create(int * arr, int * size){
    printf("\n Size : ");
    scanf("%d", size);
    printf("Elements : ");
    arr = (int *) malloc(sizeof(int)*(*size));
    for(int i=0; i<(*size); i++){
        int a;
        scanf("%d", &a);
        *(arr + i) = a;
        // printf("%d\n", *(arr + i));
    }

    return arr;
}

void linear(int * arr, int size){
    int value = 0, i=0;
    printf("\n value : ");
    scanf("%d", &value);

    for(i=0; i<size; i++){
        if(*(arr+i) == value) printf("\n Element found at '%d'\narr[%d] = %d", i,i, *(arr + i));
    }

    if(i == size) printf("\nELEMENT NOT FOUND !");
}