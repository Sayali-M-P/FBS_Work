
#include<stdio.h>
void cir(double); // function declaration
void main(){
	double rad;
	printf("Enter radius");
	scanf("%lf",&rad);
	cir(rad); //function call here
} //main ends here

void	cir(double x){
		int res=3.14*x*x;
		printf("%d",res);	
} //function defination here
