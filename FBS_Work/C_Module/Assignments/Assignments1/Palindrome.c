#include <stdio.h>

void palindrome(int);  // Function declaration here

int main() {
	int number, original, reverse = 0, remainder;
    printf("Enter a number: ");
    scanf("%d", &number);
    palindrome(number); // function call here
    
} // main ends here

void palindrome(int no) {
    int  original, reverse = 0, remainder;
    original = no;
    
    // Reverse the number
    while (no != 0) {
        remainder = no % 10;
        reverse = reverse * 10 + remainder;
        no = no / 10;
    }

    
    if (original == reverse)
        printf("Palindrome");
    else
        printf("Not Palindrome");
} // function defination here
