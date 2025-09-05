#include<stdio.h>
int age(); // function declaration here
int main(){
	int check=age(); // function call here
	if(check==1)
		printf("Eligible for vote");
	else
		printf("Not eligible for vote");
} // main ends here

int age(){
	int age;
	printf("Enter your age:");
	scanf("%d",&age);
	if(age>18)
		return 1;
	else
		return 0;
} // function defination here
