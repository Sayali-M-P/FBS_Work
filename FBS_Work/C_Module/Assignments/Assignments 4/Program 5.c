#include<stdio.h>
int main(){
	int n;
	printf("1 For Even or Odd\n");
	printf("2 For Prime or Not\n");
	printf("3 For Palindrome or Not\n");
	printf("4 For Positive, Negative or Zero\n");
	printf("5 Reverse\n");
	printf("6 Sum Of Digit\n");
	int choice;
	scanf("%d",&choice);
	if(choice==1){
		if(n%2==0)
			printf("No is even");
		else
			printf("No is odd");
	}
	else if(choice==2){
		int isPrime=1;
		int i;
		for(i=2;i<=n/2;i++){
			if(n%i==0){
		
				isPrime=0;
				printf("No is Prime");
		}
			else{
				printf("No is not Prime");
			}
			}
				
		}
	}

}
