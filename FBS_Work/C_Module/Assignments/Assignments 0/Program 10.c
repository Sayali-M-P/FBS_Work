#include <stdio.h>


// Function declarations
void T_marks(int,int,int,int,int);
void T_per(int);

int main() {
	int s1, s2, s3, s4, s5,total;
    printf("Enter marks of 5 subjects: ");
    scanf("%d%d%d%d%d", &s1, &s2, &s3, &s4, &s5);
     T_marks(s1,s2,s3,s4,s5);  
     // function call here   

    
    
} // main ends here

void T_marks(int a,int b,int c,int d,int e) {
    int total=a + b + c + d + e; // function defination here
    printf("Total Marks: %d\n", total);
     T_per(total);  
}


void  T_per(int total) {
    int per= total / 5; 
	printf("Percentage: %d%%\n", per); 
}
