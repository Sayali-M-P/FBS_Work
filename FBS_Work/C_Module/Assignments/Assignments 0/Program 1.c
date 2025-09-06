#include<stdio.h>
int sum(int,int); // function declaration here
void main(){
	int no1,no2;
	printf("Enter two number");
	scanf("%d%d",&no1,&no2);
	sum(no1,no2); // function call here		
} // main ends here

int sum(int a, int b){
	int result=a+b;
	printf("Sum is:%d\n",result); // function defination here
}


