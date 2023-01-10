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

void print_square(int size){
	int inc1, inc2;

	if(size > 0){
		for (inc1 = 0;inc1 < size;inc1++){
			for (inc2=0;inc2<size;inc2++){
				putchar('#');
			}
			putchar('\n');
		
		}
	}
		else{
			putchar('\n');
		}
	}

