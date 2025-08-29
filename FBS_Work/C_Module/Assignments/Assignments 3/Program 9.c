#include<stdio.h>
int main(){
	int n=121;
	int rev=0,original=n;
	while(n>0){
		int digit=n%10;
		rev=rev*10+digit;
		n=n/10;
	}
	if(original==rev){
		printf("palindrome");
	}
	else{
		printf("Not palindrome");
	}
	}

