#include <stdio.h>
void divisible(int); // function declaration here 
int main() {
	int number;
    printf("Enter a number: ");
    scanf("%d", &number);
    divisible(number); // function call here
} // main ends here

void divisible(int num) {
    
    if (num % 3 == 0 && num % 5 == 0) {
        printf("Divisible by both 3 and 5\n");
    }
    else if (num % 3 == 0) {
        printf("Divisible by 3 but not by 5\n");
    }
    else if (num % 5 == 0) {
        printf("Divisible by 5 but not by 3\n");
    }
    else {
        printf("Divisible by none\n");
    }
} // function defination here
