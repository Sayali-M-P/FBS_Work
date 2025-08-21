#include<stdio.h>
void main(){
	int x,y;
	char op;
	scanf("%d%d",&x,&y);
	scanf(" %c",&op);
	if(op =='+'){
		printf("Addition:%d", x+y);
	}
	else if(op == '-'){
		printf("Substraction:%d", x-y);
	}
	else if(op == '*'){
		printf("Multiplication:%d",x*y);
	}
	else if(op == '/'){
		if(y!=0){
			printf("Division:%d",x/y);
		}
		else{
			printf("Divisible by zero");
		}
	}
	else if(op == '%'){
		if(y!=0){
			printf("Modulus:%d",x%y);
		}
		else{
			printf("Error for divisible by zero");
		}
	}
	else{
		printf("Invalid Error");
	}
}
