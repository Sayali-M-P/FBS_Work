#include<stdio.h>
void swap();
void main(){
	swap();
}

void swap(){
	int a=12,b=15;
	int c;
	c=a;
	a=b;
	b=c;
	printf("Swapping of 2 numbers is:\n%d\n%d",a,b);
}
