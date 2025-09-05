#include<stdio.h>
void marks();
void main(){
	marks();
}
void marks(){
	int s1,s2,s3,s4,s5,total,per;
	printf("Enter 5 subject of marks");
	scanf("%d%d%d%d%d",&s1,&s2,&s3,&s4,&s5);
	total=s1+s2+s3+s4+s5;
	per=total/5;
	printf("total marks:%d\n",total);
	printf("Percentage:%d",per,"%");
}
