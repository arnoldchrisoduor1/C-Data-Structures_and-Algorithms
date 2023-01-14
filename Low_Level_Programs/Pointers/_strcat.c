#include <stdio.h>
#include "header_file.h"

int main(void){
	char a1[] = "First";
	char a2[] = "Second";
	char *p;

	printf("\n%s",a1);
	printf("\n%s",a2);

	p = _strcat(a1,a2);

	printf("\n%s",a1);
	printf("\n%s",a2);
	printf("\n%s",p);

	return 0;
}

