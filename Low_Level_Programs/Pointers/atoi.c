#include <stdio.h>

int main(void)
{
	int _atoi(char *s)
	{
		int sign = 1;
		unsigned int num = 0;
		do 
		{
			if(*s == '-')
			{
				sign*=-1;
			}
			else if(*s >='0' && *s <= '9')
			{
				num = num * 10 +(*s - '0');
			}
			else if(num > 0)
			{
				break;
			}
		} while(*s++);

		return (sign * num);
	}

	int nb;

	nb = _atoi("98");

	printf("\n%d",nb);

	nb = _atoi("89");

	printf("\n%d",nb);

	return 0;
}
