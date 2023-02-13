#include <stdio.h>
#include <string.h>

int reset(int *n)
{
	n = &n;
	return n;
}
