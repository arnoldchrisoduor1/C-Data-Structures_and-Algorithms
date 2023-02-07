#include <stdio.h>

int main(void)
{
	int to_98(int n)
	{
		while(n < 98)
		{
			n++;
			putchar(n + 48);
		}

		while(n > 98)
		{
			n--;
			putchar(n + 48);
		}
		if(n == 98)
		{
			putchar(n + 48);
		}
		else
		{
			putchar(' ');
		}
	}


to_98(50);
to_98(150);

return 0;
}
