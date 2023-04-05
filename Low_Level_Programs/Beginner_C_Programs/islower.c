#include <stdio.h>

/*
 * This function checks if the letter
 * is lowercase
 * or uppercase
 */

int main(void){

	int islower(int c){
		if(c >= 'a' && c<='z')
			printf("\n%c is a small letter",c);
		else
			printf("\n%c is a capital letter",c);
				  
	}

	islower('c' + 0);
	islower('H' + 0);
	return 0;
}
