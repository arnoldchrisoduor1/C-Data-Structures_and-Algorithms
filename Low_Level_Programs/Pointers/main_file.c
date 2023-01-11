#include <stdio.h>

void swap_values(int *a,int *b){

	int c;
	 c= *a;
	 *a = *b;
	 *b = c;
}

int str_len(char *s){

	int count = 0;

		while(*(s + count) != '\0'){
			count++;
		}
	return (count);
}

void _puts(char *c){
	int i = 0;
	while(*(c + i) != '\0'){
	putchar(*(c+i));
	i++;
	}
	putchar(10);
}
