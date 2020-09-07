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

// Sort the array
void insertion_sort(int arr[], int arrLength) {
    // Loop over array starting at the second value
    for (int i = 1; i < arrLength; ++i) {
        // set current value to current observed value
        int currentVal = arr[i];
        // set up loop out of for loop
        int j = i - 1;
        // loop over backwards making sure current value is greater than the value
        // observed in this loop
        for(; j >= 0 && arr[j] > currentVal; --j) {
            // set j observed value one index ahead
            arr[j+1] = arr[j];
        }
        // after finding the value lower than index of j
        // set current value one ahead
        arr[j + 1] = currentVal;
    }
}

int main(void) {
    int arr[4] = { 37, 45, 29, 8 };
    int arrLength = sizeof(arr) / sizeof(int);
    print_array(arr, arrLength);
    insertion_sort(arr, arrLength);
    print_array(arr, arrLength);
    return 0;
}