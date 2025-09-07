#include<stdio.h>
void age(int); // function declaration here
int main(){
	int ages;
	printf("Enter age");
	scanf("%d",&ages);
	age(ages); // function call here	
} // main ends here

void age(int a){	
	if(a<12){
		printf("Child");
	}
	else{
		if(a<=19){
			printf("Teenager");
		}
		else{
			if(a<=59){
				printf("Adulat");
			}
			else{
				printf("senior");
			}
		}
	}
} // function defination here
