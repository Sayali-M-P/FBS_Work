#include<stdio.h>
int square();
int cube();// function declaration here

void main(){
	int sq,cub;
	sq=square();
	cub=cube();
	printf("Square is:%d\n",sq); // function call here
	printf("Cube is:%d\n",cub);
} // main ends here

int square(){
	int num;
	printf("Enter a number");
	scanf("%d",&num);
	return num*num; // function defination here
}

int cube(){
	int num;
	printf("Enter a number");
	scanf("%d",&num);
	return num*num*num;  // function defination here
}

