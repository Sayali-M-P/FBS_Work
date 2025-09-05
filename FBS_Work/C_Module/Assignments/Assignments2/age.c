#include<stdio.h>
int age(); // function declaration here
int main(){
	age(); // function call here
	return 0;	
} // main ends here

int age(){
		int age;
	printf("Enter age");
	scanf("%d",&age);
	if(age<12){
		printf("Child %d");
	}
	else{
		if(age<=19){
			printf("Teenager %d");
		}
		else{
			if(age<=59){
				printf("Adulat %d");
			}
			else{
				printf("senior %d");
			}
		}
	}
	return 0;
} // function defination here
