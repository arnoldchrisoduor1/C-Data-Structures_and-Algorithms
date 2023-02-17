#include <stdio.h>
#include "header_file.h"

/*
 * Getting the length of the string
 *
 */

int main(void){

	char *str;
	int len = 0;

	str = "This is the dark programmer";
	len = str_len(str);

	printf("The length of the string is: %d",len);
	return 0;
}

