#include<stdio.h>
int leapyear(); // function declaration here
int main(){
	int res=leapyear();	 // function call here
	if(res==1)
		printf("Year is Leap");
	else
		printf("Year is not Leap");
} // main ends here

int leapyear(){
	int year;
	printf("Enter a year");
	scanf("%d",&year);
	if(year%4==0 && year%100!=0 || year%400==0)
		return 1;
	else
		return 0;
} // function defination here
