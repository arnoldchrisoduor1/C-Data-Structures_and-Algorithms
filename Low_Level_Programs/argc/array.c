#include <stdio.h>

int main(void)
{
	int v[] = {3,4,5,6,7};
	int sum = 0;
	int i;
	int length;

	length = sizeof(v)/sizeof(v[0]);

	for(i = 0;i < length;i++)
	{
		sum += v[i];
	}
	printf("\n%d",sum);
	return 0;
	
}
