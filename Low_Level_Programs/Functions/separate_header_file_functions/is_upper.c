#include <stdio.h>
#include "header_file.h"

int main(){
	char c;
	char b;
	c = 'A';
	b = 'a';

	printf("\n%c is: %d",c,is_upper(c));
	printf("\n%c is %d",b,is_upper(b));

	return 0;
}
