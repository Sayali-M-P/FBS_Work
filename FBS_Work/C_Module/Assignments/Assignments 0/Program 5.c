#include<stdio.h>
void average(int,int,int,int,int); // function declaration here
void main(){
	int m1,m2,m3,m4,m5;
	printf("Enter five numbers");
	scanf("%d%d%d%d%d",&m1,&m2,&m3,&m4,&m5);
	average(m1,m2,m3,m4,m5); // function call here 
	
} // main ends here

void average(int a,int b,int c,int d,int e){
	int avg=(a+b+c+d+e)/5;	
	printf("Average of 5 numbers is:%d",avg);
} // function defination here
