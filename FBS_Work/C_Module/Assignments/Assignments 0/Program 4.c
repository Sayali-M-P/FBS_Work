#include<stdio.h>
int swap(); // function declaration here 
int main(){
	swap(); // function call here
	return 0;
} // main ends here

int swap(){
	int a,b,c;
	printf("Enter two numbers");
	scanf("%d%d",&a,&b);
	c=a;
	a=b;
	b=c;
	printf("Swapping of 2 numbers is:\n%d\n%d",a,b);	
} // function defination here 
