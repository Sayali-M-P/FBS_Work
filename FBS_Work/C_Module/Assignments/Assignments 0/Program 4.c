#include<stdio.h>
void swap(int,int); // function declaration here 
int main(){
	int a,b;
	printf("Enter two numbers");
	scanf("%d%d",&a,&b); 
	swap(a,b); // function call here
} // main ends here

void swap(int no1,int no2){
	int c;
	c=no1;
	no1=no2;
	no2=c;
	printf("Swapping of 2 numbers is:\n%d\n%d",no1,no2);	
} // function defination here 
