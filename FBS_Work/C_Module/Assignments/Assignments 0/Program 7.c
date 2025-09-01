#include<stdio.h>
void minutes();
void main(){
	 minutes();
}

void minutes(){
	int total_min=120;
	int hour,min;
	hour=total_min/60;
	min=total_min%60;
	printf("%d%d%d",total_min,hour,min);
}
