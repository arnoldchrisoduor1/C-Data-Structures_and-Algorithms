#include <stdio.h>

int factorial(int n)
{
	if (n == 0){
		return (1);
	}
	return (n * factorial(n-1));
			}

	int main (void){
	int f;
	f = factorial(9);
	printf("9! is %d",f);
	return 0;
	}
