#include <stdio.h>
void my_strcpy(char *dest, const char *src) {
    while (*src != '\0') {
        *dest = *src;
        dest++;
        src++;
    }
    *dest = '\0';  
}

int main() {
    char source[] = "Hello, World!";
    char destination[50]; 
    my_strcpy(destination, source);

    printf("Source string: %s\n", source);
    printf("Copied string: %s\n", destination);

    return 0;
}

