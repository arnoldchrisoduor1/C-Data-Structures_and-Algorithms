#include <stdio.h>

/*
 * Comparing strings
 */

int main(void)
{
	int comp(char *s1, char *s2)
	{
		int op = 0;
		int i = 0;

		while(op == 0){

			if(*(s1 + i) == '\0' && *(s2 + i) == '\0')
			break;
			op = *(s1 + i) - *(s2 + i);
			i++;
		}
	}

	char v1[] = "Hello";
	char v2[] = "World";

	printf("\n%d",comp(v1,v2));
	printf("\n%d",comp(v2,v1));
	printf("\n%d",comp(v1,v1));

	return 0;
}


