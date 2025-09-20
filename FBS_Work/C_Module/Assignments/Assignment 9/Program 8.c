#include <stdio.h>

// Function to merge two arrays into a third array
void mergeArrays(int arr1[], int n1, int arr2[], int n2, int merged[]) {
    int i;
    for(i = 0; i < n1; i++) {
        merged[i] = arr1[i];
    }
    for(i = 0; i < n2; i++) {
        merged[n1 + i] = arr2[i];
    }
}

int main() {
    int arr[3] = {2, 3, 5};
    int brr[3] = {4, 6, 8};
    int crr[6];
    int n1 = 3, n2 = 3;

    // Call function to merge arrays
    mergeArrays(arr, n1, brr, n2, crr);

    printf("Merged array: ");
    for(int i = 0; i < n1 + n2; i++) {
        printf("%d ", crr[i]);
    }
    printf("\n");

    return 0;
}

