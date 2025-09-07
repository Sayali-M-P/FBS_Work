#include <stdio.h>
int triangle(int, int, int); // function declaration
int main() {
    int a, b, c;
    printf("Enter 3 sides: ");
    scanf("%d%d%d", &a, &b, &c);
    int T = triangle(a, b, c); // function call
    if (T == 1)
        printf("Triangle is Equilateral\n");
    else if (T == 2)
        printf("Triangle is Isosceles\n");
    else if (T == 3)
        printf("Triangle is Scalene\n");
    else
        printf("Not a valid triangle\n");
    return 0;
}
int triangle(int x, int y, int z) {
    if (x + y > z && y + z > x && x + z > y) {
        if (x == y && y == z)
            return 1; 
        else if (x == y || y == z || x == z)
            return 2; 
        else
            return 3; 
    } else {
        return 0; 
    }
}

