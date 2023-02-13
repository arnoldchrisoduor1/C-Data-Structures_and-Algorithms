#include <stdio.h>

int main(void)
{
	char *_str_copy(char *des, char *src)
	{
		int i;
		while(*(src + i) != '\0')
		{
			*(des + i) = *(src + i);
			i++;
		}
		*(des + i) = '\0';
	}

	char s[40];
	char *ptr;
	
	ptr = _str_copy(s,"String to be copied");

	printf("\n%s",s);
	printf("\n%s",ptr);

	return 0;
}
