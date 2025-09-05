#include<stdio.h>
int sum();
void main(){
	int result;
	result=sum();
	printf("Sum is:%d\n",result);
}

int sum(){
	int no1,no2;
	printf("Enter a number");
	scanf("%d%d",&no1,&no2);
	return no1+no2;
	
}


