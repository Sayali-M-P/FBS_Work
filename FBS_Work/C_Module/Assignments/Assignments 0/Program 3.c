#include <stdio.h>
void convert(double);  // Function declaration

int main() {
    double cel;
    printf("Enter temperature in Celsius: ");
    scanf("%lf", &cel);   
    convert(cel); // function call here
    return 0;
}

// Function definition
void convert(double a) {
    double result = (a * 9 / 5) + 32;
    printf("Temperature in Fahrenheit: %.2lf\n", result);  
}
