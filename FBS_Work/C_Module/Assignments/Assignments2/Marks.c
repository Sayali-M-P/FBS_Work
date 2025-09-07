#include<stdio.h>
void marks(int); // function declaration here
int main(){
	int mark;
	printf("Enter a marks");
	scanf("%d",&mark);
	marks(mark); // function call here
} // main ends here

void marks(int mk){
	if(mk>55){
		if(mk>75){
			printf("Distinction ");
		}
		else{
			if(mk>65){
				printf("First class");
			}
			else{
				printf("Second class");
			}
		}
	}	
	else{
		if(mk>=40){
			printf("Pass class");
		}
		else{
			printf("Fail");
		}
	}

} // function defination here
