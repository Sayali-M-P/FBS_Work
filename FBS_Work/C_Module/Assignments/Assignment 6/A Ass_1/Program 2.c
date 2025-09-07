#include <stdio.h>

int palindrome(int);  // Function declaration here

int main() {
	int number, original, reverse = 0, remainder;
    printf("Enter a number: ");
    scanf("%d", &number);
    int result=palindrome(number); // function call here
    if(result==10)
    	printf("palindrome");
    else
    	printf("not palindrome");
    
} // main ends here

int palindrome(int no) {
    int  original, reverse = 0, remainder;
    original = no;
    
    // Reverse the number
    while (no != 0) {
        remainder = no % 10;
        reverse = reverse * 10 + remainder;
        no = no / 10;
    }

    
    if (original == reverse)
        return 10;
    else
        return 20;
} // function defination here

