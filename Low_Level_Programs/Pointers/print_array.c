#include <stdio.h>

/*
 * This function prints an array
 *
 */

int main(void)
{
	int printt(int *a, int n)
	{
		int i;
		while(i < n)
		{
			printf("%d,",a[i]);
			putchar(' ');
			i++;
		}
	}
	int array[6] = {65,78,98,89,97,65};

	printt(array,4);
	putchar('\n');
	printt(array,2);
	putchar('\n');
	printt(array,6);

	return 0;
}

