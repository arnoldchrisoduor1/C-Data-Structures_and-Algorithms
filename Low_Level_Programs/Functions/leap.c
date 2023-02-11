#include <stdio.h>

int main(void)
{
	int year;

	puts("Which year do you want to check if it's a leap year ..");

	scanf("%d",&year);

	if(year%4 == 0)
	{
		printf("\nThe year %d is a leap year",year);
	}
	else if((year%100 == 0) && (year%400 == 0))
	{
		printf("\n%d is a leap year",year);
	}
	else
	{
		printf("\nThis year :%d is not a leap year",year);
	}

	return 0;
}
