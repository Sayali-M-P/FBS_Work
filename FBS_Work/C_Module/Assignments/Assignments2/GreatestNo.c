#include<stdio.h>
int greatest(); // function declaration here
int main(){
	greatest(); // function call here
	return 0;
} // main ends here

int greatest(){
	int a,b,c;
	printf("Enter 3 numbers");
	scanf("%d%d%d",&a,&b,&c);
	if(a>=b){
		if(a>=c){
			printf("A is greatest");
		}
		else{
			printf("C is greatest");
		}
}
	else{
		if(b>=c){
			printf("B is greatest");
		}
		else{
			printf("C is greatest");
		}
	}
	return 0;
} // function defination here
