#include <stdio.h>

int main(void)
{
	void printt(char *s)
	{
		if(*s != '\0')
		{
			putchar(*s);
			printt(s + 1);
		}
		else
		{
			putchar('\n');
		}
	}
	
	void reverse(char *s)
	{
		if(*s != '\0')
		{
			reverse(s + 1);
			putchar(*s);
		}
		else
		{
			putchar('\0');
		}
	}

	int factorial(int n)
	{
		if(n < 0)
			return (-1);
		else if(n == 1)
			return (1);
		else
			return(n * factorial(n-1));
	}
					


	char *str;
	int x;
	str = "This is the string";

	printt(str);
	putchar('\n');
	reverse(str);

	x = factorial(9);
	printf("\nFactoril of 9 is:%d",x);

	return 0;
}
