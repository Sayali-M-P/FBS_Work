#include<stdio.h>
void age(int); // function declaration here
int main(){
	int ages;
	printf("Enter your age:");
	scanf("%d",&ages);
	age(ages); // function call here
	
} // main ends here

void age(int a){
	if(a>18)
		printf("Eligible for vote");
	else
		printf("Not eligible for vote");
} // function defination here
