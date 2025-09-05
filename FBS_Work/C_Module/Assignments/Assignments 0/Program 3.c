#include<stdio.h>
float convert(); //function declaration here
void main(){
	float fah;
	fah=convert();
	printf(" %.2f",fah); //function call here
} //main ends here 

float convert(){
	float cel;
	printf("Enter temperature in Celsius:");
	scanf("%f",&cel);
	return (cel*9/5)+32;
} //function defination here
