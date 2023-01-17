#include <stdio.h>
#include "header.h"

int main(void){

	int a = 98;
	int b = 67;

	printf("\nThe sum is: %d", addNumbers(a,b));
	printf("\nThe difference is :%d",subNumbers(a,b));
	printf("\nThe product is:%d",mul(a,b));

	return 0;
}
