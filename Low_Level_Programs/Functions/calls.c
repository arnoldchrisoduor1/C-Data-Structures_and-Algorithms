#include <stdio.h>

int main(void)
{
	int calls;
	float bill;

	puts("Enter the number of calls you've had");
	scanf("%d",&calls);

	printf("\nThe number of calls you've had this month is:%d",calls);

	if (calls > 0 && calls <= 100)
	{
		bill = 200;
	}
	else if(calls >100 && calls <= 150)
	{
		calls = calls - 100;
		bill = 200+ (0.60 * calls);
	}
	else if(calls > 150 && calls <=200)
	{
		calls = calls - 150;
		bill  = 200+ (0.6*50) + (0.5*calls);
	}
	else{
		calls = calls - 200;
		bill = 200 + (0.6*50) + (0.5*50) + (0.4 * calls);
	}

	printf("\nYour bill is: %.2lf",bill);

	return 0;
	}
