#include<stdio.h>
int main(){
	int basic_salary=7000;
	double da,ta,hra,total_salary;
	if(basic_salary<=5000){
		da=basic_salary*0.10;
		ta=basic_salary*0.20;
		hra=basic_salary*0.25;
	}
	else{
		da=basic_salary*0.15;
		ta=basic_salary*0.25;
		hra=basic_salary*0.30;
	}
	total_salary=basic_salary+da+ta+hra;
	printf("%1f total salary",total_salary);
}
