#include <stdio.h>
#include <stdlib.h>

int main()
{
	int *ptr;
	ptr = (int*)malloc(2*sizeof(int));

	if(ptr == NULL)
		puts("Could not allocate memory");
	else
		puts("Memory allocated sueccssfully");

	int *ptr2 = NULL;
	printf("%d",ptr2);

	return 0;
}
