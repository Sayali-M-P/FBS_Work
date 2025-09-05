#include <stdio.h>
int total_min;

// Function declarations
int hou();   // Returns hours
int mint();  // Returns remaining minutes

int main() {
    int hour, min;

   
    printf("Enter total minutes: ");
    scanf("%d", &total_min);

    //  functions call here
    hour = hou();
    min = mint();

    // Output
    printf("Total Minutes: %d\n", total_min);
    printf("Hours: %d\n", hour);
    printf("Minutes: %d\n", min);

    return 0;
}

int hou() {
    return total_min / 60;
}

int mint() {
    return total_min % 60;
}
