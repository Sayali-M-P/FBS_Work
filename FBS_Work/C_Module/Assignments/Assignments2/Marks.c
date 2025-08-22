#include<stdio.h>
int main(){
	int marks;
	scanf("%d",&marks);
	if(marks>55){
		if(marks>75){
			printf("Distinction %d\n",marks);
		}
		else{
			if(marks>65){
				printf("First class %d\n",marks);
			}
			else{
				printf("Second class %d\n",marks);
			}
		}
	}	
	else{
		if(marks>=40){
			printf("Pass class %d\n",marks);
		}
		else{
			printf("Fail");
		}
	}
	
}
