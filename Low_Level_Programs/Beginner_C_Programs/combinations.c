#include <stdio.h>

/*
 * Making number patterns in C
 *
 */

int main(void){
	int e = 48;
	int a = 48;
	int i = 48;

while( e < 58){
	a = 48;
	while(a < 58){
		i = 48;
		while(i < 58){
			if(e!=a && a!=i && e!=i && e < a && a <i){
				putchar(e);
				putchar(a);
				putchar(i);

				putchar(',');
				putchar(' ');
			}
			i++;
		}
		a++;
	}

	e++;
}
return 0;
}
