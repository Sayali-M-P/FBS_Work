#include<stdio.h>
void traingle();
void main(){
	traingle();
}

void traingle(){
		float base,height,area;
	printf("Enter base and height ");
	scanf("%f%f",&base,&height);
	area=0.5*base*height;
	printf("area of traingle:%.2f\n",area);
}
