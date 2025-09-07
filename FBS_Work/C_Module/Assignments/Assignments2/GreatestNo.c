#include<stdio.h>
void greatest(int,int,int); // function declaration here
int main(){
	int a,b,c;
	printf("Enter 3 numbers");
	scanf("%d%d%d",&a,&b,&c);
	greatest(a,b,c); // function call here
} // main ends here

void greatest(int x,int y,int z){
	
	if(x>=y){
		if(x>=z){
			printf("x is greatest");
		}
		else{
			printf("z is greatest");
		}
}
	else{
		if(y>=z){
			printf("y is greatest");
		}
		else{
			printf("z is greatest");
		}
	}
} // function defination here
