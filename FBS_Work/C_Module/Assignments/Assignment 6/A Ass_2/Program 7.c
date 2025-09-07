#include <stdio.h>

// Function declaration
int age(int);

int main() {
    int ages;
    printf("Enter age: ");
    scanf("%d", &ages);

    int result = age(ages); // Function call

    if (result == 1)
        printf("Child\n");
    else if (result == 2)
        printf("Teenager\n");
    else if (result == 3)
        printf("Adult\n");
    else if (result == 4)
        printf("Senior\n");
    else
        printf("Invalid age\n");

    return 0;
}

// Function definition
int age(int a) {
    if (a < 0)
        return 0; 
    else if (a < 12)
        return 1; 
    else if (a <= 19)
        return 2; 
    else if (a <= 59)
        return 3; 
    else
        return 4;
}

