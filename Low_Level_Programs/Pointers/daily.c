#include <stdio.h>
#include <stdlib.h>

int main()
{
	int n = 10;
	void *ptr2 = &n;

	printf("\n%d",ptr2);

	int *ptr = NULL;

	ptr = (int*)malloc(2*sizeof(int));

	if(ptr == NULL)
		printf("\nError Allocating Space");
	else
		printf("\nMemory Allocate Successfully");

	return 0;
}
