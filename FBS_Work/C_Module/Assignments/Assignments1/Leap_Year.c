#include<stdio.h>
void leapyear(); // function declaration here
int main(){
	int year;
	printf("Enter a year");
	scanf("%d",&year);
	leapyear(year);	 // function call here

} // main ends here

void leapyear(int Y){
	
	if(Y%4==0 && Y%100!=0 || Y%400==0)
		printf("Year is Leap");
	else
		printf("Year is not Leap");
} // function defination here
