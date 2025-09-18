#include <stdio.h>
void main() {
	int i;
    int arr[] = {5, 2, 9, 1, 6};
    int n = sizeof(arr) / sizeof(arr[0]);
    int min = arr[0];
    int max = arr[0];
    for ( i = 1; i < n; i++) {
        if (arr[i] < min) {
            min = arr[i];
        }
        if (arr[i] > max) {
            max = arr[i];
        }
    }
    printf("Minimum = %d\n", min);
    printf("Maximum = %d\n", max);
}

