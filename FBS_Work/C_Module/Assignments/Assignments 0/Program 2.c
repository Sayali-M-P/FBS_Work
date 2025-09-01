#include<stdio.h>
void area(); // function declaration
void main(){
	area(); //function call here
} //main ends here

area(){
		float rad,a;
	printf("Enter a number");
	scanf("%f",&rad);
	a=3.14*rad*rad;
	printf("%.2f",a);
} //function defination here
