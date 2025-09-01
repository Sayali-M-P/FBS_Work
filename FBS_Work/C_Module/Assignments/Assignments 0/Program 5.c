#include<stdio.h>
void average();
void main(){
	average();
}

void average(){
	int m1=21,m2=12,m3=10,m4=30,m5=41;
	int avg;
	avg=(m1+m2+m3+m4+m5)/5;
	printf("Average of 5 numbers is:%d",avg);
}
