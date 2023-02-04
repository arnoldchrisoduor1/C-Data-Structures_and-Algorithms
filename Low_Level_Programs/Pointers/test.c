#include <stdio.h>
/*
 * Counting the number of characters in a string
 *
 */

int main(void)
{
	void puts2(char *n)
	{
		int count;
		while(*(n + count) != '\0')
		{
			putchar(*(n + count));
			count = count+2;
		}
	}

	char *str;
	str = "thisisastring";
	puts2(str);
	return 0;
}
