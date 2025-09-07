#include<stdio.h>
int age(int); // function declaration here
int main(){
	int ages;
	printf("Enter your age:");
	scanf("%d",&ages);
	int a=age(ages); // function call here
	if(a==1)
		printf("Eligible for vote");
	else
		printf("Not eligible for vote");
	
} // main ends here

int age(int a){
	if(a>18)
		return 1;
	else
		return 0;
} // function defination here
