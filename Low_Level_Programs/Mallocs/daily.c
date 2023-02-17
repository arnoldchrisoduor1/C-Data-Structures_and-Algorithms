#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int n,i;
	puts("How many integres will you give:");
	scanf("%d",&n);

	int *ptr = (int *)malloc(n * sizeof(int));

	if(ptr == NULL)
	{
		puts("Error allocating the memory");
		exit(1);
	}

	for(i = 0;i < n;i++)
	{
		puts("Enter a number");
		scanf("%d",ptr + i);

	}

	putchar('\n');

	for(i = 0;i < n; i++)
	{
		printf("\n%d",*(ptr + i));
	}

	return 0;
}
				
