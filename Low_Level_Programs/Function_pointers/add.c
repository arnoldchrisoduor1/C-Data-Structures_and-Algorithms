#include <stdio.h>

int add(int a,int b){
	return a+b;
}

int main(void){
	int c;
	int (*p)(int,int);
	p = &add;
	c = (p)(3,5);
	printf("\nThe sum is:%d",c);
	return 0;
}
