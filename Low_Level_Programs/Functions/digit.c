#include <stdio.h>

int main(void)
{
	/**
	 * This function checks for the digits in the given
	 */

	int digits(int n)
	{
		if(n >=0 && n <= 0)
		
			printf("\n The value given is a digit",n);
		else
			printf("\nThe value given is not a digit",n);
	}

	digits('6');
	digits('k'+0);

	return 0;
}
