#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int i, n;
	puts("Input the number of integers you'll insert:");
	scanf("%d",&n);

	int *ptr = (int *)malloc(n * sizeof(int));

	if(ptr == NULL)
	{
		puts("No memory was allocated");
		exit(1);
	}

	for(i=0; i < n; i++)
	{
		puts("Enter an integer:");
		scanf("%d",ptr+1);
	}

	for(i=0; i < n; i++)
	{
		printf("\nNumber:%d",*(ptr+i));
	}

	return 0;
}
