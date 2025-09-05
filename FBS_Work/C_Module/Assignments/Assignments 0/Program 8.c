#include<stdio.h>
float Rect(); // function declaration here
void main(){
	float perimeter;
	perimeter=Rect(); // function call here
	printf("perimeter of rectangle:%.2f\n",perimeter);
} // main ends here

float Rect(){
	float length,width;
	printf("Enter length");
	scanf("%f",&length);
	printf("Enter width");
	scanf("%f",&width);
	return 2*(length+width); // function defination here	
}
