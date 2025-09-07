#include <stdio.h>

// Function declaration
int salary(float);
int main() {
    float basic, da, ta, hra, total;
    int result;
    printf("Enter basic salary: ");
    scanf("%f", &basic);
    // Function call
    result = salary(basic);
    // Salary component calculations
    if(result == 1) {
        da = basic * 0.10;
        ta = basic * 0.20;
        hra = basic * 0.25;
    } else {
        da = basic * 0.15;
        ta = basic * 0.25;
        hra = basic * 0.30;
    }
    total = basic + da + ta + hra;
    printf("Total salary is: %.2f\n", total);

    return 0;
}
// Function definition
int salary(float bs) {
    if(bs <= 5000) {
        return 1;
    } else {
        return 0;
    }
}

