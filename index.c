#include <stdio.h>
#include <time.h>

void bubbleSort(int arr[], int n) {
    int i, j, temp;
    for (i = 0; i < n-1; i++) {
        for (j = 0; j < n-i-1; j++) {
            if (arr[j] > arr[j+1]) {
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}

int main() {
    int arr[] = {64, 34, 25, 12, 22, 11, 90};
    int n = sizeof(arr)/sizeof(arr[0]);

    // Record the start time
    clock_t start = clock();

    // Sort the array using Bubble Sort
    bubbleSort(arr, n);

    // Record the end time
    clock_t end = clock();

    // Calculate the time taken for sorting
    double time_taken = ((double)(end - start))/CLOCKS_PER_SEC;

    // Print the sorted array
    printf("Sorted array: ");
    for (int i=0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    printf("Time taken for sorting: %f seconds\n", time_taken);

    return 0;
}
