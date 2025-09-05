#include<stdio.h>
int average(); // function declaration here
void main(){
	int avg;
	avg=average(); // function call here 
	printf("Average of 5 numbers is:%d",avg);
} // main ends here

int average(){
	int m1,m2,m3,m4,m5;
	printf("Enter five numbers");
	scanf("%d%d%d%d%d",&m1,&m2,&m3,&m4,&m5);
	return (m1+m2+m3+m4+m5)/5;	
} // function defination here
