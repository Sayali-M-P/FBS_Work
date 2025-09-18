#include<stdio.h>
void main(){
	int i;
	int arr[5]; 
	printf("Enter numbers");
	for(i=0;i<5;i++){
		scanf("%d",&arr[i]);
	}
	
	for(i=0;i<5;i++){
		if(arr[i]%2==0)
			printf("%d even\n",arr[i]);
		else
			printf("%d odd\n",arr[i]);
	}
}
