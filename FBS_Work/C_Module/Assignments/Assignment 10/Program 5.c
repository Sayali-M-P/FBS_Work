#include <stdio.h>
#include <string.h>

int main() {
    char str1[] = "apple";
    char str2[] = "banana";

    int res = strcmp(str1, str2);

    if(res == 0)
        printf("Equal\n");
    else if(res < 0)
        printf("str1 is less\n");
    else
        printf("str1 is greater\n");

    return 0;
}

