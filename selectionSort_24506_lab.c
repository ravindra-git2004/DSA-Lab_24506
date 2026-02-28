#include <stdio.h>

// Selection Sort function
void selectionSort(int arr[], int n) {
    int i, j, min, temp;

    for(i = 0; i < n-1; i++) {
        min = i;

        for(j = i+1; j < n; j++) {
            if(arr[j] < arr[min]) {
                min = j;
            }
        }

        // swap
        temp = arr[i];
        arr[i] = arr[min];
        arr[min] = temp;
    }
}

int main() {
    int arr[] = {64, 25, 12, 22, 11};  // initialized array
    int n = 5;

    selectionSort(arr, n);

    printf("Sorted array:\n");
    for(int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}