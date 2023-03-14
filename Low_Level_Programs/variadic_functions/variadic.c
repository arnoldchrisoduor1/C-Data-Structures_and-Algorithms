#include <stdio.h>
#include <stdarg.h>

/**
 * Summ all arguemments
 */

int sum(const unsigned int n, ...)
{
	va_list valist;
	unsigned int i;
	int sum = 0;

	if(n==0)
		return (0);
	va_start(valist, n);
	for(i=0; i<n; i++)
		sum+=va_arg(valist,int);
	va_end(valist);
	return (sum);
}

int main()
{
	printf("%d",sum(2,4,5));
	printf("%d",sum(4,5,4,3,2));

	return 0;
}
