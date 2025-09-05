#include<stdio.h>
int evenodd(); // function declaration here
int main(){
	int res=evenodd(); //function call here
	if(res==1)
		printf("No is Even");
	else
			printf("No is odd");
} // main ends here

int	evenodd(){
		int num;
		printf("Enter number");
		scanf("%d",&num);
	if(num%2==0)
		return 1;
	else
		return 0;
	
} // function defination here 
