#include<stdio.h>
int traingle(); // function declaration here
int main() {
    traingle(); // function call here
    return 0;
} // main ends here

int traingle(){
	int a, b, c;
	printf("Enter 3 sides");
    scanf("%d%d%d", &a, &b, &c);

    if (a + b > c && b + c > a && a + c > b) {
        if (a == b) {
            if (b == c) {
                printf("Triangle is Equilateral\n");
            } else {
                printf("Triangle is Isosceles\n");
            }
        } else {
            if (b == c || a == c) {
                printf("Triangle is Isosceles\n");
            } else {
                printf("Triangle is Scalene\n");
            }
        }
    } else {
        printf("Not a valid triangle\n");
    }
	return 0;
} // function defination here
