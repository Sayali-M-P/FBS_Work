#include<stdio.h>
void square(int);
void cube(int);// function declaration here

void main(){
	int num;
	printf("Enter a number");
	scanf("%d",&num);
	square(num);// function call here
	cube(num);
	
} // main ends here

void square(int a){
	int sq=a*a; // function defination here
	 printf("Square is:%d\n",sq);
}

void cube(int b){
	 int cub=b*b*b;  // function defination here
	 printf("Cube is:%d\n",cub);
}

