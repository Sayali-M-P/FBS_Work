#include<stdio.h>

int main() {
    int n = 200;
    int i, num, sum, digit, fact, j;

    printf("Strong numbers between are:\n", n);

    for (i = 1; i <= n; i++) {
        num = i;
        sum = 0;

        while (num > 0) {
            digit = num % 10;

            
            fact = 1;
            for (j = 1; j <= digit; j++) {
                fact *= j;
            }

            sum += fact;
            num = num / 10;
        }

        if (sum == i) {
            printf("%d\n", i);
        }
    }

    return 0;
}

