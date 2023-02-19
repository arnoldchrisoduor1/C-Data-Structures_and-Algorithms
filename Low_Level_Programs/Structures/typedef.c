#include <stdio.h>
#include <stdlib.h>

typedef struct car
{
	char engine[20];
	int miles;
	char brand[20];
}car;

int main(void)
{
	car model1 = {.engine="v",.miles=3456};

	printf("\nEngine:%s",model1.engine);
	printf("\nmiles:%d",model1.engine);
	
	return 0;
}

