#include<stdio.h>
int num(int);
void main(){
	int no;
	printf("Enter a number");
	scanf("%d",&no);
	int n=num(no);
	if(n==1){
		printf("number is positive");
	}
	else if(n==2){
		printf("number is neutral");
	}
	else{
		printf("number is negative");	
	}
}

int num(int a){
	if(a>0){
		return 1;
	}
	else if(a==0){
		return 2;
	}
	else{
		return 3;	
	}
}
