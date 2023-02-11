#include <stdio.h>

int main(void)
{
	int i;
	int sum = 0;
	int num;

	puts("Input any number");
	scanf("%d",num);

	for(i = 1; i <=num ; i++)
	{
		sum = sum+i;
	}

	printf("\nThe sum of the first %d numbers is: %d",sum);

	return 0;
}
