#include <stdio.h>
int main() {
	int i;
    int arr[] = {10, 20, 30, 40, 50};
    int n = sizeof(arr) / sizeof(arr[0]);
    int target;
    int found = 0;
    printf("Enter the number to search: ");
    scanf("%d", &target);
    for (i = 0; i < n; i++) {
        if (arr[i] == target) {
            printf("Number found at index %d\n", i);
            found = 1;
            break; 
        }
    }
    if (!found) {
        printf("Number not found in the array.\n");
    }
}

