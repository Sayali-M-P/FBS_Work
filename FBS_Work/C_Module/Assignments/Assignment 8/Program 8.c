#include <stdio.h>

int main() {
    int arr[3] = {2, 3, 5};
    int brr[3] = {4, 6, 8};
    int crr[6];
    int i;

    for(i = 0; i < 3; i++) {
        crr[i] = arr[i];
    }

    for(i = 0; i < 3; i++) {
        crr[i + 3] = brr[i];
    }

    printf("Merged array: ");
    for(i = 0; i < 6; i++) {
        printf("%d ", crr[i]);
    }

}

