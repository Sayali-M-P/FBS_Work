#include<stdio.h>
void cal();

void main(){
	cal();

}

void cal(){
	int num=10;
	int sq,cub;
	sq=num*num;
	printf("Square is:%d\n",sq);
	cub=num*num*num;
	printf("Cube is:%d\n",cub);
}


