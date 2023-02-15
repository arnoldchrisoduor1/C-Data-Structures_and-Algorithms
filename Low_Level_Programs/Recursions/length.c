#include <stdio.h>

int main(void)
{
	int length(char *s)
	{
		if(*s == '\0')
		{
			return(0);
		}
		else
		{
			return(1 + length(s +1));
					}
					}

	int n;

	n = length("This is the string");

	printf("\n%d",n);
					return 0;
					}


