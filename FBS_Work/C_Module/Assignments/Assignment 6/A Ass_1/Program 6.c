#include <stdio.h>
char upperlower(int);  // Function declaration here
int main() {
	char ch;
    printf("Enter a character: ");
    scanf(" %c", &ch);  
    char a=upperlower(ch);  //  function call here
    if(a==1)
    	printf("character is uppercase");
    else
    	printf("character is lowercase");
    
} // main ends here

char upperlower(int c) {
    if(c >= 'A' && c <= 'Z')
        return 1;
    else
        return 0;
} // function defination here 

