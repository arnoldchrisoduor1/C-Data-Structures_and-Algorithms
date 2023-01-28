#include <stdio.h>
#include "header_file.h"

/*
 * Reseting the vaalue of p
 *
 */

int main(void)
{
	int p = 30;

	printf("\nP = %d",p);
	
	reset(&p);

	printf("\nP = %d",p);

	return 0;
}
