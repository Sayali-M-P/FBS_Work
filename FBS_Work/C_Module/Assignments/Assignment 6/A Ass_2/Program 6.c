#include <stdio.h>
int divisible(int); // function declaration here 
int main() {
	int number;
    printf("Enter a number: ");
    scanf("%d", &number);
    int DS=divisible(number); // function call here
    if (DS==1)
        printf("Divisible by both 3 and 5\n");
    else if (DS==2)
        printf("Divisible by 3 but not by 5\n");
    else if (DS==3)
        printf("Divisible by 5 but not by 3\n");
    else
        printf("Divisible by none\n");
} // main ends here

int divisible(int num) {
    
    if (num % 3 == 0 && num % 5 == 0) {
        return 1;
    }
    else if (num % 3 == 0) {
        return 2;
    }
    else if (num % 5 == 0) {
        return 3;
    }
    else {
        return 0;
    }
} // function defination here

