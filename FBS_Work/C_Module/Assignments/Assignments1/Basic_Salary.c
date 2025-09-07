#include<stdio.h>
void salary(int); // function declaration here
int main(){
	float basic;
	printf("Enter basic salary");
	scanf("%f",&basic);
	salary(basic); // function call here
} // main ends here

void salary(int bs){
	float da,ta,hra,total;
	if(bs<=5000){
		da=bs*0.10;
		ta=bs*0.20;
		hra=bs*0.25;
	}
	else{
		da=bs*0.15;
		ta=bs*0.25;
		hra=bs*0.30;
	}
	total=bs+da+ta+hra;
	printf("total salary is:%.2f\n",total);
	
} // function defination here
