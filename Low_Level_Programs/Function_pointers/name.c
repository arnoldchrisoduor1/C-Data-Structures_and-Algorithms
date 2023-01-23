#include <stdio.h>

void print(char *name){
	printf("\nMy name is %s:",name);
}
int main(void){
	void (*ptr)(char*);
	ptr = print;

	(ptr)("Odicris");
	return 0;
}
