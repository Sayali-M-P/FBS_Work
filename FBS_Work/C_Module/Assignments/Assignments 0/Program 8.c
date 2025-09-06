#include<stdio.h>
void Rect(float,float); // function declaration here
void main(){
	float length,width;
	printf("Enter length");
	scanf("%f",&length);
	printf("Enter width");
	scanf("%f",&width);
	Rect(length,width); // function call here
} // main ends here

void Rect(float x,float y ){
	
	float perimeter=2*(x+y); // function defination here
	printf("perimeter of rectangle:%.2f\n",perimeter);	
}
