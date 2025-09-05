#include<stdio.h>
int arithmatic(); // function declaration here
int main(){
	arthmatic(); // function call here
	return 0;
} // main ends here

int arthmatic(){
	int x,y;
	char op;
	printf("Enter 2 numbers");
	scanf("%d%d",&x,&y);
	printf("Enter a operator");
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
} // function defination here

