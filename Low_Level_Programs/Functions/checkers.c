#include <stdio.h>

/**
 * This code has a wide variety of checkers
 * Some of these include letters, numbers and turning signed to unsigned
 * enjoy the program
 */

int main(void)
{
	/**
	 * Letter checker
	 */
	int letters(int c)
	{
		if ( c >= 'A' &&  c<='Z')
			printf("\nThe given item is a capital letter",c);
		else
			printf("\nThe given value is definitely not a capital letter",c);
	}

	int digit(int n)
	{
		if(n >=0 && n <=9)
			printf("\nThe given item is a number",n);
		else
			printf("\nThe given item definitely not a number",n);
	}

	int change_sign(int x)
	{
		if(x < 0){
			x = x*-1;
			printf("\nThe value of %d has been changed and the sign removed",x);
		}
		else{
			printf("\nThe value of x remains as :%d",x);
		}
	}



	letters('L' +0);
	letters('B' +0);
	letters('h' +0);

	digit('7');
	digit('v'+0);
	digit('0');

	change_sign(-9);
	change_sign(-4);

	return 0;
}
