int linear_search(int arr[], int arrLength, int value) {
    for (int i = 0; i < arrLength; ++i) {
        if (arr[i] == value) {
            return value;
        }
    }
    return -1;
}