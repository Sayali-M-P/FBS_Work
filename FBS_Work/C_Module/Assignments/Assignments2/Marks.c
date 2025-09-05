#include<stdio.h>
int marks(); // function declaration here
int main(){
	marks(); // function call here
	return 0;
} // main ends here

int marks(){
	int marks;
	printf("Enter a marks");
	scanf("%d",&marks);
	if(marks>55){
		if(marks>75){
			printf("Distinction %d\n");
		}
		else{
			if(marks>65){
				printf("First class %d\n");
			}
			else{
				printf("Second class %d\n");
			}
		}
	}	
	else{
		if(marks>=40){
			printf("Pass class %d\n");
		}
		else{
			printf("Fail");
		}
	}
	return 0;
} // function defination here
