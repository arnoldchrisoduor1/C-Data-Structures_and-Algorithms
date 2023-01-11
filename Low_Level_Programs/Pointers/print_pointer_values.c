#include <stdio.h>

int main(void){
	int n;

	printf("\nThe value for char: %lu bytes",sizeof(char));
	printf("\nThe value for int : %lu bytes", sizeof(int));
	printf("\nThe value for float: %lu bytes", sizeof(float));
	printf("\nThe value for n as it is: %lu bytes", sizeof(n));

	return 0;
}
