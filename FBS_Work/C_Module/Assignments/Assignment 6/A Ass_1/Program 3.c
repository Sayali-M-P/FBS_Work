#include<stdio.h>
int leapyear(int); // function declaration here
int main(){
	int year;
	printf("Enter a year");
	scanf("%d",&year);
	int res=leapyear(year);	 // function call here
	if(res==1)
		printf("year is leap");
	else
		printf("year is not leap");

} // main ends here

int leapyear(int Y){
	
	if(Y%4==0 && Y%100!=0 || Y%400==0)
		return 1;
	else
		return 0;
} // function defination here
