#include <stdio.h>

/**
 * We cannot change the value the pointer points to but,
 * we can change the value being pointed to
 *
 */
int main()
{
	const int i = 4;
	printf("\n%d",i);

	int k = 3;
	const int *ip = &i;
	
	printf("\nThis is a read-only variable: %d",i);
	return 0;
}
