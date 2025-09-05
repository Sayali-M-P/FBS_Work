#include<stdio.h>
float area(); // function declaration
void main(){
	float a;
	a=area(); //function call here
	printf("%.2f",a);
} //main ends here

float area(){
		float rad;
	printf("Enter a radius");
	scanf("%f",&rad);
	return 3.14*rad*rad;
	
} //function defination here

