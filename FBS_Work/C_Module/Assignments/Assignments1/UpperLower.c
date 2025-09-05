#include <stdio.h>
int upperlower();  // Function declaration here
int main() {
    int check = upperlower();  //  function call here
    if(check == 1)
        printf("Character is uppercase.\n");
    else
        printf("Character is lowercase.\n");
} // main ends here

int upperlower() {
    char ch;
    printf("Enter a character: ");
    scanf(" %c", &ch);  
    if(ch >= 'A' && ch <= 'Z')
        return 1;
    else
        return 0;
} // function defination here 

