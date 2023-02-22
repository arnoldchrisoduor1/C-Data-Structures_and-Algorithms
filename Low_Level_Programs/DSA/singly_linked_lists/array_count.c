#include <stdio.h>

int main()
{
	int arr[] = {6,8,5,3};

	int count = 0;

	count = (sizeof(arr))/(sizeof(int));

	printf("\nThe value of count :%d",count);

	return 0;
}
