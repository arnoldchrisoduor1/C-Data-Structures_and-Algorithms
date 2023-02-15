#include <stdio.h>

int main(void)
{
	int factorial(int n)
	{
		if( n < 0)
			return(-1);
		else if(n == 1)
			return (1);
		else
			return(n * factorial (n - 1));
	}

	int x;
	int b;

	x = factorial(30);
	b = factorial(9);

	printf("\nThe factorial of x: %d",x);
	printf("\nThe factorial of b: %d",b);

	return 0;
}
