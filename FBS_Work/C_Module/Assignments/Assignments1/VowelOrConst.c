#include<stdio.h>
int vowelcon(); // function declaration here
int main(){
	int result=vowelcon(); // function call here
	if(result==1)
		printf("Character is vowel");
	else
		printf("Character is constant");
} // main ends here

int vowelcon(){
	char ch='b';
	if(ch=='a'|| ch=='e' || ch=='i' || ch=='o' || ch=='u')
		return 1;
	else
		return 0;
} // function defination here
