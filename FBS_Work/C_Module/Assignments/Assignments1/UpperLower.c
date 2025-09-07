#include <stdio.h>
void upperlower(int);  // Function declaration here
int main() {
	char ch;
    printf("Enter a character: ");
    scanf(" %c", &ch);  
    upperlower(ch);  //  function call here
    
} // main ends here

void upperlower(int c) {
    if(c >= 'A' && c <= 'Z')
        printf("Character is uppercase.\n");
    else
        printf("Character is lowercase.\n");
} // function defination here 
