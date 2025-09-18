#include <stdio.h>
int i;
int isPrime(int num) {
    if (num <= 1)
        return 0;
    for (i = 2; i*i <= num; i++) {
        if (num % i == 0)
            return 0;
    }
    return 1;
}

int main() {
    int arr[100], n;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for( i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Prime numbers in the array are:\n");
    for( i = 0; i < n; i++) {
        if(isPrime(arr[i])) {
            printf("%d ", arr[i]);
        }
    }

    return 0;
}

