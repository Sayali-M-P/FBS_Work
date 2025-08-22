#include<stdio.h>
int main(){
	int age;
	printf("Enter age");
	scanf("%d",&age);
	if(age<12){
		printf("Child %d",age);
	}
	else{
		if(age<=19){
			printf("Teenager %d",age);
		}
		else{
			if(age<=59){
				printf("Adulat %d",age);
			}
			else{
				printf("senior %d",age);
			}
		}
	}
	
}
