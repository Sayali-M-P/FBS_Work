#include<stdio.h>
float traingle(); // function declaration here
void main(){
	float area;
	area=traingle(); // function call here
	printf("area of traingle:%.2f\n",area);
} // main ends here

float traingle(){
		float base,height,area;
	printf("Enter base and height ");
	scanf("%f%f",&base,&height);
	return 0.5*base*height; // function defination here	
}
