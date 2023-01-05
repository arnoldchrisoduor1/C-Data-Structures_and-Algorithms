#include <stdio.h>

void switch_int(int *a, int *b){

	int c = *a;
	*b = *a;
	*b = c;

	return 0;
}
