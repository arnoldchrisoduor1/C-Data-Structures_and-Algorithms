#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/* betty style doc for function main goes there */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	/* your code goes there */

	if(n < 1)
		printf("\nThe value of n is:%d and it's less than 1",n);
	else if(n > 1)
		printf("\nThe value of n is:%d and it's greater than 1",n);
	else
		printf("\nThe value of n 0");
	return (0);
}
