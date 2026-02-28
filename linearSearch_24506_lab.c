#include <stdio.h>

int linearSearch(int arr[], int size, int target) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == target) {
            return i; // Target found at index i
        }
    }
    return -1; // Target not found
}

int main() {
    int arr[] = {4, 3, 5, 6, 7, 8, 9};
    int size = sizeof(arr) / sizeof(arr[0]); 
    int target = 8;

    int result = linearSearch(arr, size, target);

    if (result != -1)
        printf("Element found at index: %d\n", result);
    else
        printf("Element not found\n");

    return 0;
}