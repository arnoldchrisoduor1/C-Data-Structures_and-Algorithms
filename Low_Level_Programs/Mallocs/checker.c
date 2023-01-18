#include <stdio.h>
#include <stdlib.h>

int main(void){
	char *c;
	int *i;
	float *f;

	c = checker(sizeof(char) * 34);
	printf("\n Char : %p ",(void *)c);
	i = checker(sizeof(int) * 23);
	printf("\nInteger : %p ",(void *)i);
	f = checker(sizeof(float) * 45);
	printf("\nFloat : %p",(void *)f);

	free(c);
	free(i);
	free(f);

	return 0;
}
