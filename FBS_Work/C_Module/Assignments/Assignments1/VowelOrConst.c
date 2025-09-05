#include <stdio.h>
int vowelcon();  // Function declaration here
int main() {
    int result = vowelcon();  // Function call here
    if(result == 1)
        printf("Character is a vowel\n");
    else
        printf("Character is a consonant\n");
} // main ends here


int vowelcon() {
    char ch;
    printf("Enter a character: ");
    scanf(" %c", &ch);  
    if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
       ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U')
        return 1;
    else
        return 0;
} // Function definition here
