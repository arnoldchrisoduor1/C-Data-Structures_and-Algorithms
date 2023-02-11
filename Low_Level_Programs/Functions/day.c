#include <stdio.h>

int main(void)
{
	int days;

	puts("Input between 1 - 7");

	scanf("%d",&days);

	switch(days)
	{
		case 1:
			puts("Sunday");
			break;
		case 2:
			puts("Monday");
			break;
		case 3:
			puts("Tuesday");
			break;
		case 4:
			puts("Wednesday");
			break;
		case 5:
			puts("Thursday");
			break;
		case 6:
			puts("Friday");
			break;
		case 7:
			puts("Saturday");
			break;
		default:
			puts("This is an invalid input");
			puts("Please follow the rules");
	}
	return 0;
}
