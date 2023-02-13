#include <stdio.h>
#include "header_file.h"

int main(void)
{
	int p = 30;

	printf("\nP = %d",p);
	
	reset(&p);

	printf("\nP = %d",p);

	return 0;
}
