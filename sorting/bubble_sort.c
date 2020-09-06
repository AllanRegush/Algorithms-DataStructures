#include <stdio.h>
#include <stdbool.h>

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

// Swap the two values
void swap(int *x, int *y) {
    int temp = *x;
    *x = *y;
    *y = temp;
}

// Sort the array
void bubble_sort(int arr[], int arrLength) {
    bool isSorted;
    for (int i = arrLength; i > 0; --i) {
        isSorted = true; // Assume the Array is sorted
        for (int j = 0; j < i - 1; ++j) {
            if (arr[j] > arr[j + 1]) {
                swap(&arr[j], &arr[j + 1]);
                isSorted = false;
            }
        }
        if (isSorted) {
            break;
        }    
    }
}

int main(void) {
    int arr[4] = { 37, 45, 29, 8 };
    int arrLength = sizeof(arr) / sizeof(int);
    print_array(arr, arrLength);
    bubble_sort(arr, arrLength);
    print_array(arr, arrLength);
    return 0;
}