#include <stdio.h>
#include <string.h>

int main(void)
{
	char str1[12] = "hello";
	char str2[12] = "World";
	char str3[12];
	int len;

	strcpy(str3,str1);

	printf("\nstrcpy(str3,str1): %s",str3);

	strcat(str1,str2);

	printf("\nstrcat(str1,str2): %s",str1);

	printf("\nstrcat(str1,str2): %s",str2);

	len = strlen(str1);

	printf("\nThe length of str1: %d",len);

	return 0;
}



