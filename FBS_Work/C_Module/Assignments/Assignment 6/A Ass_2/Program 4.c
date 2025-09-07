#include <stdio.h>

int marks(int); // function declaration

int main() {
    int mark;
    printf("Enter marks: ");
    scanf("%d", &mark);

    int res = marks(mark); // function call

    if (res == 10)
        printf("Distinction\n");
    else if (res == 20)
        printf("First class\n");
    else if (res == 30)
        printf("Second class\n");
    else if (res == 40)
        printf("Pass class\n");
    else if (res == 50)
        printf("Fail\n");
    else
        printf("Invalid result\n"); 

    return 0;
}


int marks(int mk) {
    if (mk > 75)
        return 10; 
    else if (mk > 65)
        return 20; 
    else if (mk > 55)
        return 30; 
    else if (mk >= 40)
        return 40; 
    else
        return 50; 
}

