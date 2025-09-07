#include <stdio.h>
int vowelcon(char);  // Function declaration here
int main() {
	char ch;
    printf("Enter a character: ");
    scanf(" %c", &ch); 
	char checks=vowelcon(ch);  // Function call here
	if(checks==1)
		printf("character is vowel");
	else
		printf("character is a consonant");
    
} // main ends here


int vowelcon(char c) {
    if(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' ||
       c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U')
        return 1;
    else
        return 0;
} // Function definition here

