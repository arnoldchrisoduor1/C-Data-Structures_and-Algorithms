#include "header_file.h"
#include <stdio.h>

/*
 * The classic swapping of values
 *
 */

int main(){
	int a = 98;
	int b = 67;
	int c;

	printf("\nThe value of a is: %d\n value of b is:%d",a,b);
	swap_values(&a,&b);
	printf("\nThe new value of a:%d \nand b:%d",a,b);

	return 0;
}
