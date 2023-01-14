#include <stdio.h>

int main(){

	int m;
	int *n;

	n = &m;
		m = 89;
	printf("\nValue of m before change %d",m);
	printf("\nValue held by pointer n: %p",n);

	*n = 654;

	printf("\nNew value of m 654: %d",m);
	printf("\nAddress of m: %p",&m);
	printf("\nValue held by the pointer: %p",n);

	return 0;
}
