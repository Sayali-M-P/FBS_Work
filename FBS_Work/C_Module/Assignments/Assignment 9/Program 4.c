#include <stdio.h>

// Function declaration
void checkEvenOdd(int arr[], int n);

int main() {
    int i;
    int arr[5];

    printf("Enter 5 numbers:\n");
    for(i = 0; i < 5; i++) {
        scanf("%d", &arr[i]);
    }

    // Function call
    checkEvenOdd(arr, 5);

    return 0;
}

// Function definition
void checkEvenOdd(int arr[], int n) {
    for(int i = 0; i < n; i++) {
        if(arr[i] % 2 == 0)
            printf("%d is even\n", arr[i]);
        else
            printf("%d is odd\n", arr[i]);
    }
}

