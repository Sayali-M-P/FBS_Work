#include <stdio.h>

// Function declaration
int linearSearch(int arr[], int n, int target);

int main() {
    int arr[] = {10, 20, 30, 40, 50};
    int n = sizeof(arr) / sizeof(arr[0]);
    int target;

    printf("Enter the number to search: ");
    scanf("%d", &target);

    // Call the search function
    int index = linearSearch(arr, n, target);

    if (index != -1) {
        printf("Number found at index %d\n", index);
    } else {
        printf("Number not found in the array.\n");
    }

    return 0;
}

// Function definition
int linearSearch(int arr[], int n, int target) {
    for (int i = 0; i < n; i++) {
        if (arr[i] == target) {
            return i;  
        }
    }
    return -1;
}

