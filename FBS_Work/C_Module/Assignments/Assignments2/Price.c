#include<stdio.h>
void price(int,char,float); // function declaration here 
int main(){
	int prices;
    char isStudent;
    float discount;
    printf("Enter price: ");
    scanf("%d", &prices);
    printf("Are you a student? (y/n): ");
    scanf(" %c", &isStudent);  
    price(prices,isStudent,discount); // function call here 
} // main ends here
 
void price(int P,char isSt,float ds){
	
    if (isSt == 'y') {
        if (P > 500) {
            ds = P * 0.20;
        } else {
            ds = P * 0.10;
        }
    } else {
        if (P > 600) {
            ds = P * 0.15;
        } else {
            ds = 0;
        }
    }

    printf("Discount: %.2f\n", ds);
    printf("Final price: %.2f\n", P - ds);
} // function defination here

