#include<stdio.h>
void arithmatic(int,int,char); // function declaration here
int main(){
	int x,y;
	char op;
	printf("Enter 2 numbers");
	scanf("%d%d",&x,&y);
	printf("Enter a operator");
	scanf(" %c",&op);
	arithmatic(x,y,op); // function call here
} // main ends here

void arithmatic(int a,int b,char opp){
	if(opp =='+'){
		printf("Addition:%d", a+b);
	}
	else if(opp == '-'){
		printf("Substraction:%d", a-b);
	}
	else if(opp == '*'){
		printf("Multiplication:%d",a*b);
	}
	else if(opp == '/'){
		if(b!=0){
			printf("Division:%d",a/b);
		}
		else{
			printf("Divisible by zero");
		}
	}
	else if(opp == '%'){
		if(b!=0){
			printf("Modulus:%d",a%b);
		}
		else{
			printf("Error for divisible by zero");
		}
	}
	else{
		printf("Invalid Error");
	} 
} // function defination here

