#include <stdio.h>

int main(void){
	int i = 1,x;
	while(i < 10){
		for(x = 'a';x < 'z';x++){
			putchar(x);
		}
		i++;
		putchar('\n');
	}
}
