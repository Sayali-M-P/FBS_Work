#include <stdio.h>

int main() {
    int n = 5;  // Number of rows
    int i, j;

    for(i = 0; i < n; i++) {
        // Print leading spaces
        for(j = 0; j < i; j++) {
            printf(" ");
        }

        // Print stars with space
        for(j = 0; j < n - i; j++) {
            printf("*");
            if(j < n - i - 1) {
                printf(" ");
            }
        }

        printf("\n");
    }

    return 0;
}

