#include<stdio.h>
int main(){
	int number;
	printf("Enter a number");
	scanf("%d",&number);
	if(number%3==0){
		if(number%5==0){
			printf("Divisible by both");
		}
	}
	else{
		if(number%5==0){
			printf("divisible by 5 but not by 3");
		}
		else{
			printf("Divisible by none");
		}
	}
}
