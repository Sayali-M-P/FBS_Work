#include<stdio.h>
void traingle(float,float); // function declaration here
void main(){
	float base,height;
	printf("Enter base and height ");
	scanf("%f%f",&base,&height);
	traingle(base,height); // function call here

} // main ends here

void traingle(float a, float b){
	 float area=0.5*a*b; // function defination here
	printf("area of traingle:%.2f\n",area);	
}
