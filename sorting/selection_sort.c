#include <stdio.h>

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
void selection_sort(int arr[], int arrLength) {
    for (int i = 0; i < arrLength; ++i) {
        int index = i;
        for (int j = i + 1; j < arrLength; ++j) {
            if(arr[j] < arr[index]) {
                index = j;
            }
        }
        swap(&arr[i], &arr[index]);
    }
}

int main(void) {
    int arr[4] = { 37, 45, 29, 8 };
    int arrLength = sizeof(arr) / sizeof(int);
    print_array(arr, arrLength);
    selection_sort(arr, arrLength);
    print_array(arr, arrLength);
    return 0;
}