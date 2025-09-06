#include <stdio.h>
// Function declarations
void hou(int);   
void mint(int);  

int main() {
	int total_min;
    printf("Enter total minutes: ");
    scanf("%d", &total_min);

    //  functions call here
	hou(total_min);
    mint(total_min);
    printf("Total Minutes: %d\n", total_min);   
} // main ends here

void hou(int a ) {
     int hour=a / 60;
     printf("Hours: %d\n", hour);
}

void mint(int b) {
    int min= b % 60;
     printf("Minutes: %d\n", min);
} // function defination here
