#include<stdio.h>
#include<math.h>
int main(){
	int i,n,digits,temp=0,sum=0;
	for(i=1;i<=n;i++){
		int num=i;
		int sum=0;
		int digits=0;
		int temp=num;
		
		while(temp>0){
			digits++;
			temp/=10;
		}
		
		temp=num;
		while(temp>0){
			int digit =temp%10;
			sum+=pow(digit,digits);
			temp/=10;
		}
		printf("%d",num);
	
	}
	
}
