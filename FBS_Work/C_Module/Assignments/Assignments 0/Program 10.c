#include <stdio.h>
int total; // global variable

// Function declarations
int T_marks();
int T_per();

int main() {
    int per;

    total = T_marks();  
    per = T_per();   // function call here   

    printf("Total Marks: %d\n", total);
    printf("Percentage: %d%%\n", per);
} // main ends here

int T_marks() {
    int s1, s2, s3, s4, s5;
    printf("Enter marks of 5 subjects: ");
    scanf("%d%d%d%d%d", &s1, &s2, &s3, &s4, &s5);
    return s1 + s2 + s3 + s4 + s5; // function defination here
}


int T_per() {
    return total / 5;  
}
