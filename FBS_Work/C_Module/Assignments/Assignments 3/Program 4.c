#include<stdio.h>
int main(){
	int n=7;
	int i=2;
	int isPrime=1;
	while(i<n){
		if(n%i==0){
			isPrime=0;
			break;
		}
		i++;
	}
	if(isPrime==1){
		printf("%d is prime\n",n);
	}
	else{
		printf("Not Prime\n");
	}
	
	
}
