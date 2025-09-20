#include <stdio.h>
#include <string.h>

int main() {
    char str[] = "hello world";
    char ch = 'l';

    char *ptr = strrchr(str, ch);
    printf("%s\n", ptr ? ptr : "Character not found");

    return 0;
}

