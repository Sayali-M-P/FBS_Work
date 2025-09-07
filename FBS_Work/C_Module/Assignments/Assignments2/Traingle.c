#include<stdio.h>
void traingle(int, int,int); // function declaration here
int main() {
	int a, b, c;
	printf("Enter 3 sides");
    scanf("%d%d%d", &a, &b, &c);
    traingle(a,b,c); // function call here
} // main ends here

void traingle(int x,int y,int z){
	

    if (x + y > z && y + z > x && x + z > y) {
        if (x == y) {
            if (y == z) {
                printf("Triangle is Equilateral\n");
            } else {
                printf("Triangle is Isosceles\n");
            }
        } else {
        if (y == z || x == z) {
                printf("Triangle is Isosceles\n");
            } else {
                printf("Triangle is Scalene\n");
            }
        }
    } else {
        printf("Not a valid triangle\n");
    }
	
} // function defination here
