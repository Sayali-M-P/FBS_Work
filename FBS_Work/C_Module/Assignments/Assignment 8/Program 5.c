#include <stdio.h>
void main() {
    int arr[10], i, n;
    printf("Enter number of elements in array: ");
    scanf("%d", &n);
    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    printf("Alternate elements are:\n");
    for(i = 0; i < n; i += 2) {  
        printf("%d ", arr[i]);
    }
    printf("\n");
}

