#include <stdio.h>

int main(void)
{
	void reverse(char *c)
	{
		if(*c != '\0')
		{
			reverse(c + 1);
			putchar(*c);
		}
		else{
			putchar('\n');
		}
	}

	char *str;
	str = "This should be reversed";

	reverse(str);
}

