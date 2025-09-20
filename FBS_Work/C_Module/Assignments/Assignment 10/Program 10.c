#include <stdio.h>
#include <string.h>

int main() {
    char src[] = "Hello";
    char dest[10];
    strncpy(dest, src, 3);
	dest[3] = '\0';  

    printf("Copied string: %s\n", dest);

    return 0;
}

