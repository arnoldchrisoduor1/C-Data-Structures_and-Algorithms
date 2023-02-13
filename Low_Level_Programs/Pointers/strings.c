#include <stdio.h>
#include <string.h>

int main ()
{
	void reverse(char *c)
	{
		int count;
		while(*(c + count) != '\0')
		{
			count++;
		}

		for(count;count > -1;count--)
		{
			putchar(*(c + count));
		}
	}

	void other(char *s)
	{
		int i;
		while(*(s + i) != '\0')
		{
			putchar(*(s + i));
			i = i+2;
		}
	}

	char *str;
	str = "This is the test string";
	reverse(str);
	putchar('\n');
	other(str);

	return 0;
}

