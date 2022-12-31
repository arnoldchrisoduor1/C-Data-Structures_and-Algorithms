#include <stdio.h>
#include "add.h"

int main(){

	double result = add(3.5,6.8);
	double results = multiply(3.5,6.8);
	printf("\nThe added answer is: %f",result);
	printf("\nThe multiplied answer is: %f",results);

	return 0 ;
}

