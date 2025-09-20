#include <stdio.h>
#include <string.h>   // For strdup()


int main() {
    char original[] = "Hello, world!";
    
    char *copy = strdup(original); 

    if (copy != NULL) {
        printf("Original: %s\n", original);
        printf("Copy: %s\n", copy);

        free(copy);  
    }

    return 0;
}

