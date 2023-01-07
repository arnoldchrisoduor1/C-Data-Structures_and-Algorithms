#include "header_file.h"
#include <stdio.h>

int is_upper(int c){
	if ((c >= 'A') && (c <= 'Z')){
		return (1);
	}
		else{
			return (0);
		}
	}

double mul(double a, double b){
	return a*b;
}

void most_numbers(void){
	
        for (int a=48;a<=58;a++){
		if ((a == 54) || (a == 57)){
			continue;
		}
		putchar(a);
	}
	putchar(10);
}

void print_line(int n){
	while (n-- > 0){
		putchar('-');
	}
	putchar('\n');
}

