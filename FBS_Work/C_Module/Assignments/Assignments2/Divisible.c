#include <stdio.h>
int divisible(); // function declaration here 
int main() {
    divisible(); // function call here
    return 0;
} // main ends here

int divisible() {
    int number;
    printf("Enter a number: ");
    scanf("%d", &number);
    if (number % 3 == 0 && number % 5 == 0) {
        printf("Divisible by both 3 and 5\n");
    }
    else if (number % 3 == 0) {
        printf("Divisible by 3 but not by 5\n");
    }
    else if (number % 5 == 0) {
        printf("Divisible by 5 but not by 3\n");
    }
    else {
        printf("Divisible by none\n");
    }
    return 0;
} // function defination here
