#include<stdio.h>
int salary(); // function declaration here
int main(){
	float total;
	total=salary(); // function call here
	printf("total salary is:%.2f\n",total);
} // main ends here

int salary(){
	float basic;
	printf("Enter basic salary");
	scanf("%f",&basic);
	float da,ta,hra,total;
	if(basic<=5000){
		da=basic*0.10;
		ta=basic*0.20;
		hra=basic*0.25;
	}
	else{
		da=basic*0.15;
		ta=basic*0.25;
		hra=basic*0.30;
	}
	total=basic+da+ta+hra;
	return total;
} // function defination here
