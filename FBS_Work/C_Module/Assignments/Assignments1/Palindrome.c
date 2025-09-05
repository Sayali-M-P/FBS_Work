#include <stdio.h>

int palindrome();  // Function declaration here

int main() {
    int rev = palindrome(); // function call here
    if (rev == 1)
        printf("Number is palindrome\n");
    else
        printf("Number is not palindrome\n");
} // main ends here

int palindrome() {
    int number, original, reverse = 0, remainder;
    printf("Enter a number: ");
    scanf("%d", &number);
    original = number;
    
    // Reverse the number
    while (number != 0) {
        remainder = number % 10;
        reverse = reverse * 10 + remainder;
        number = number / 10;
    }

    
    if (original == reverse)
        return 1;
    else
        return 0;
} // function defination here
