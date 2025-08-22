#include<stdio.h>
int main(){
    int price;
    char isStudent;
    float discount;

    printf("Enter price: ");
    scanf("%d", &price);

    printf("Are you a student? (y/n): ");
    scanf(" %c", &isStudent);  

    if (isStudent == 'y') {
        if (price > 500) {
            discount = price * 0.20;
        } else {
            discount = price * 0.10;
        }
    } else {
        if (price > 600) {
            discount = price * 0.15;
        } else {
            discount = 0;
        }
    }

    printf("Discount: %.2f\n", discount);
    printf("Final price: %.2f\n", price - discount);


}



