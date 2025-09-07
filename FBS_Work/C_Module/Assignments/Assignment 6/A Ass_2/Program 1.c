#include<stdio.h>
int arithmatic(int,int,char); // function declaration here
int main(){
	int x,y,a,b;
	char op;
	printf("Enter 2 numbers");
	scanf("%d%d",&x,&y);
	printf("Enter a operator");
	scanf(" %c",&op);
	int result=arithmatic(x,y,op); // function call here
	if(result==1)
		printf("Addition:%d",a+b);
	else if(result==2)
		printf("Substraction:%d", a-b);
	else if(result==3)
		printf("Multiplication:%d",a*b);
	else if(result==4)
		if(result==10)
			printf("Division:%d",a/b);
		else
			printf("Divisible by zero");
	else if(result==5)
		if(result==30)
			printf("Modulus:%d",a%b);
		else
			printf("Error for divisible by zero");
	else
		printf("Invalid Error");
} // main ends here

int arithmatic(int a,int b,char opp){
	if(opp =='+'){
		return 1;
	}
	else if(opp == '-'){
		return 2;
	}
	else if(opp == '*'){
		return 3;
	}
	else if(opp == '/'){
		if(b!=0){
			return 10;
		}
		else{
			return 20;
		}
	}
	else if(opp == '%'){
		if(b!=0){
			return 30;
		}
		else{
			return 40;
		}
	}
	else{
		return 50;
	} 
} // function defination here


