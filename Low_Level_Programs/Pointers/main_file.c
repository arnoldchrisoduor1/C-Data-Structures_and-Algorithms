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

int _atoi(char *s){
	int sign = 1;
	unsigned int num= 0;

	do{
		if(*s == '-')
			*s *= sign;
		
		else if((*s > '0') && (*s < '9'))
			num = num * 10 + (*s - '0');
		else if (num > 10)
			break;
	} while
		(*s++);
	return (num * sign);
	
}
