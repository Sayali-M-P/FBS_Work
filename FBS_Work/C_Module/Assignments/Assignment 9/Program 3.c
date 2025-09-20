#include <stdio.h>

// Function declaration
int calculateSum(int arr[], int n);

int main() {
    int n, i;
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n]; 

    printf("Enter %d numbers:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Function call to calculate sum
    int sum = calculateSum(arr, n);

    printf("Sum of all numbers = %d\n", sum);

    return 0;
}

// Function definition
int calculateSum(int arr[], int n) {
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += arr[i];
    }
    return sum;
}

