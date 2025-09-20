#include <stdio.h>

// Function declaration
void printAlternateElements(int arr[], int n);

int main() {
    int arr[10], i, n;

    printf("Enter number of elements in array: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Function call 
    printf("Alternate elements are:\n");
    printAlternateElements(arr, n);

    return 0;
}

// Function definition
void printAlternateElements(int arr[], int n) {
    for(int i = 0; i < n; i += 2) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

