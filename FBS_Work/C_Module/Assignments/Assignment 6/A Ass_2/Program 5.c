#include <stdio.h>

// Function declaration: takes price and student status, returns final price
float price(int, char);

int main() {
    int originalPrice;
    char isStudent;
    float finalPrice;

    // Input
    printf("Enter price: ");
    scanf("%d", &originalPrice);
    printf("Are you a student? (y/n): ");
    scanf(" %c", &isStudent); // Note the space before %c

    // Function call and store returned value
    finalPrice = price(originalPrice, isStudent);

    // Output
    printf("Final price after discount: %.2f\n", finalPrice);

    return 0;
}

// Function definition
float price(int P, char isSt) {
    float discount;

    if (isSt == 'y' || isSt == 'Y') {
        if (P > 500)
            discount = P * 0.20;
        else
            discount = P * 0.10;
    } else {
        if (P > 600)
            discount = P * 0.15;
        else
            discount = 0;
    }

    float finalAmount = P - discount;
    return finalAmount;
}

