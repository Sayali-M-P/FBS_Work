#include<stdio.h>
void convert();
void main(){
	convert();
}

void convert(){
	float fah,cel;
	printf("Enter temperature in Celsius:");
	scanf("%f",&cel);
	fah=(cel*9/5)+32;
	printf(" %.2f",fah);
}
