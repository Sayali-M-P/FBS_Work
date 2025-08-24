#include<stdio.h>
#include<math.h>
int main(){
	int n=153;
	int temp,count=0,digit,sum=0;
	temp=n;
	while(temp>0){
		count++;
		temp=temp/10;	
	}
	temp=n;
	while(temp>0){
		digit=temp%10;
		sum+=pow(digit,count);
		temp=temp/10;
	}
	if(sum==n){
		printf("%d is armstrong\n",n);
	}
	else{
		printf("not armstrong\n");
	}
}
