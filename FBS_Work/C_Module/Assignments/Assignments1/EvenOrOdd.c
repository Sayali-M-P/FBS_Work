#include<stdio.h>
void evenodd(int); // function declaration here
int main(){
		int num;
		printf("Enter number");
		scanf("%d",&num);
	evenodd(num); //function call here
} // main ends here

void evenodd(int a){
	if(a%2==0)
		printf("Even");
	else
		printf("odd");
	
} // function defination here 
