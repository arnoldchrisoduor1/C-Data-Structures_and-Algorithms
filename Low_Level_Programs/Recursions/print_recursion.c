#include <stdio.h>

int main(void)
{
	void recur(char *s)
	{
		if(*s != '\0')
		{
			putchar(*s);
			recur(s + 1);
		}
		else
		{
			putchar('\0');
		}
	}

	char *c;
	c = "This is a string";
	recur(c);
	return 0;
}
