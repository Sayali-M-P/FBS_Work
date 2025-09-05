#include<stdio.h>
int main(){
	int n=150;
	int i,j;
	
	for(i=2;i<=n;i++){
		int isPrime=1;
		for(j=2;j*j<=i;j++){
			if(i%j==0){
				isPrime=0;
				break;
			}
		}
		if(isPrime){
			printf("%d\n",i);
		}
	}
}
