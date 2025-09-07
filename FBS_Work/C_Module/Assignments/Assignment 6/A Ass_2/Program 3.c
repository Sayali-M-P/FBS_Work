#include<stdio.h>
int greatest(int,int,int); // function declaration here
int main(){
	int a,b,c;
	printf("Enter 3 numbers");
	scanf("%d%d%d",&a,&b,&c);
	int Great=greatest(a,b,c); // function call here
	if(Great==1)
		if(Great==10)
			printf("a is greatest");
		else
			printf("c is greatest");
	else
		if(Great==20)
			printf("b is greatest");
		else
			printf("c is greatest");
} // main ends here

int greatest(int x,int y,int z){
	
	if(x>=y){
		if(x>=z){
			return 10;
		}
		else{
			return 0;
		}
}
	else{
		if(y>=z){
			return 20;
		}
		else{
			return 2;
		}
	}
} // function defination here
