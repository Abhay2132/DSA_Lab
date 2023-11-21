#include <stdio.h>

// Function to swap two elements.
void swap(int* a, int* b) {
  int t = *a;
  *a = *b;
  *b = t;
}

// Function to partition the array around the pivot element.
int partition(int arr[], int low, int high) {
  int pivot = arr[high]; // pivot
  int i = (low - 1); // index of smaller element

  for (int j = low; j <= high - 1; j++) {
    // If current element is smaller than the pivot
    if (arr[j] < pivot) {
      i++; // increment index of smaller element
      swap(&arr[i], &arr[j]); // swap current element with smaller element
    }
  }

  swap(&arr[i + 1], &arr[high]); // swap pivot with element at index i + 1
  return (i + 1); // return the partition index
}

// Function to recursively sort the array using quick sort.
void quickSort(int arr[], int low, int high) {
  if (low < high) {
    int pi = partition(arr, low, high); // partition the array around the pivot

    // recursively sort the left and right subarrays
    quickSort(arr, low, pi - 1);
    quickSort(arr, pi + 1, high);
  }
}

// Function to print the array.
void printArray(int arr[], int size) {
  int i;
  for (i = 0; i < size; i++) {
    printf("%d ", arr[i]);
  }
  printf("\n");
}

int main() {
  int arr[] = {10, 80, 30, 90, 40, 50, 70, 60, 20};
  int size = sizeof(arr) / sizeof(arr[0]);

  quickSort(arr, 0, size - 1);

  printf("Sorted array: \n");
  printArray(arr, size);

  return 0;
}
