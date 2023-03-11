#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/*
 * more headers goes there
 *
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	/* your code goes there */
	int l;
	l = n%10;

	printf("\nThe value of n is:%d",n);
	printf("\nThe last value of n is:%d",l);

	return (0);
}
