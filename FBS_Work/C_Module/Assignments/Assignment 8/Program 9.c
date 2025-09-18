#include<stdio.h>
int main(){
	int i;
	int arr[]={1,2,3,4,5};
	int start=0;
	int end=4;
	int temp;
	while(start<end){
		temp=arr[start];
		arr[start]=arr[end];
		arr[end]=temp;
		
		start++;
		end--;
	}
	printf("Reveresed array:");
	for(i=0;i<5;i++){
		printf("%d",arr[i]);
	}
}
