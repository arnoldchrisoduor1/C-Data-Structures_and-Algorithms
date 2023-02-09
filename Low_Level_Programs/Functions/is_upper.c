#include <stdio.h>

int main(void)

	/**
	 * this code checks for uppercase letters
	 *
	 */
{
	int is_upper(int c)
	{
		if( c >= 'A' && c <= 'Z')
		
			printf("\nThe input is an upper case letter",c);
		else
			printf("\nThe letter is not an uppercase letter",c);
	}

	is_upper('L'+0);
	is_upper('s'+0);

	return 0;
}

