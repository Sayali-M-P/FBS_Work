#include <stdio.h>
int main() {
    int n = 12345;
    int temp = n;
    int fd, ld;

    ld = n % 10;  
    while (temp >= 10) {
        temp = temp / 10;
    }
    fd = temp;

    int sum = fd + ld;
    printf("%d ( %d + %d)", sum,fd,ld);

    return 0;
}

