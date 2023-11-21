#include <stdio.h>
#include "../lib/array.h"

#define br printf("\n")
#define defaultArrSize 5

void swapArr(int *, int, int);
int partition(int *, int, int);
void quicksort(int *, int, int);

void main()
{
    int size;

    printf("Quick Sort \n");
    printf("Input arr size : ");
    // scanf("%d", &size);

    int arr[] = {5, 4, 3, 2, 1};
    // printf("Elements : ");

    // for(int i=0; i<size; i++) scanf("%d", (arr+i));
    printf("arr(%d) = ", 5);
    printArr(arr, 5);

    quicksort(arr, 0, 4);

    br;
    br;
    printf("After Quick Sort :-");
    br;
    br;
    printf("arr(%d) = ", 5);
    printArr(arr, 5);
    br;
}

void swapArr(int *arr, int a, int b)
{
    int c = arr[a];
    arr[a] = arr[b];
    arr[b] = c;
}

int partition(int *arr, int low, int high)
{
    int pivot = arr[high];
    int min = low - 1;
    for (int i = low; i < high; i++)
    {
        if (arr[i] <= pivot)
        {
            min++;

            printf("\npivot:%d\nSwaping arr[%d](%d) <-> arr[%d](%d)\n",pivot, min, arr[min], i, arr[i]);

            swapArr(arr, min, i);

            printArr(arr, 5);
        }
    }

    swapArr(arr, min + 1, pivot);
    return min + 1;
}

void quicksort(int *arr, int low, int high)
{

    if (low < high)
    {
        int p = partition(arr, low, high);

        br;
        printArr(arr, 5);br;
        printf("pivot : %d", p);
        printf("\npartition : %d", p);
        quicksort(arr, low, p - 1);
        quicksort(arr, p + 1, high);
    }
}