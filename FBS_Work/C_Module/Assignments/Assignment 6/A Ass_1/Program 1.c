#include<stdio.h> 
int evenodd(int); // function declaration here 
int main(){ 
	int num; 
	printf("Enter number"); 
	scanf("%d",&num); 
	int res=evenodd(num); //function call here 
	if(res==1) 
		printf("Even");
	else 
		printf("odd"); 
} // main ends here 
		
int evenodd(int a){
	 if(a%2==0) 
	 	return 1; 
	 else
	 	return 0; 
} // function defination here
