#include <stdio.h>
#include <string.h>

int main() {
    char str1[] = "apple";
    char str2[] = "pl";

    char *result = strstr(str1, str2);

    if(result != NULL) {
        printf("Substring found: %s\n", result);
    } else {
        printf("Substring not found.\n");
    }

    return 0;
}

