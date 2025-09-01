#include<stdio.h>
void sum();
void main(){
	sum();
}

void sum(){
	int no1,no2,result;
	printf("Enter a number");
	scanf("%d%d",&no1,&no2);
	result=no1+no2;
	printf("%d",result);
}

