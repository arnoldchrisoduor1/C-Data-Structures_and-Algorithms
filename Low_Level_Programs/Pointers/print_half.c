#include <stdio.h>

/*
 * Printing half the characters
 *
 */

int main(void)
{
	void half(char *p)
	{
		int count;
		int i;
		int halff;
		while(*(p + count) != '\0')
		{
			count++;
		}
		printf("\nNumber of characters are: %d",count);

		halff = count/2;

		printf("\nHalf number of characters should be: %d",halff);

		putchar('\n');

		for(i;i <=(count)/2; i++)
		{
			putchar(*(p + i));
		}

	}

	char *str;

	str = "Printing half of the following content";

	half(str);

	return 0;
}
