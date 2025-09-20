#include <stdio.h>
#include <strings.h> 

int main() {
    char str1[] = "Hello";
    char str2[] = "hello";

    int result = strcasecmp(str1, str2);

    printf("Result: %d\n", result);
    result == 0 && printf("Strings are equal (case-insensitive)\n");

    return 0;
}

