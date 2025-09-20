#include <stdio.h>

// Function to add two arrays and store result in third array
void addArrays(int arr1[], int arr2[], int result[], int n) {
    for(int i = 0; i < n; i++) {
        result[i] = arr1[i] + arr2[i];
    }
}

int main() {
    int arr[5] = {1, 2, 3, 4, 5};
    int brr[5] = {10, 20, 30, 40, 50};
    int crr[5];
    int n = 5;

    // Call function to add arrays
    addArrays(arr, brr, crr, n);

    printf("Sum of arrays (crr[]):\n");
    for(int i = 0; i < n; i++) {
        printf("%d ", crr[i]);
    }
    printf("\n");

    return 0;
}

