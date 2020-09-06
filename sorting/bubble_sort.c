#include <stdio.h>
#include <stdbool.h>

// Swap the two values
void swap(int *x, int *y) {
    int temp = *x;
    *x = *y;
    *y = temp;
}

// Sort the array
void bubble_sort(int arr[], int arrLength) {
    bool isSwapped;
    do {
        isSwapped = false;
        for (int i = 0; i < arrLength; ++i) {
            if (arr[i] > arr[i + 1]) {
                swap(&arr[i], &arr[i + 1]);
                isSwapped = true;
            }
        }
    } while(!isSwapped); // Swap until there are no elements to swap
}


// Pretty print the resulting array
void print_array(int arr[], int arrLength) {
  for(int i = 0; i < arrLength; ++i) {
    if(i == 0) {
      printf("{ %d", arr[i]);
    } else {
      printf(", %d", arr[i]);
    }
  }
  printf(" } \n");
}

int main(void) {
  int arr[5] = { 4, 2, 4, 6, 5 };
  int arrLength = sizeof(arr) / sizeof(int);
  print_array(arr, arrLength);
  bubble_sort(arr, arrLength);
  print_array(arr, arrLength);
  return 0;
}