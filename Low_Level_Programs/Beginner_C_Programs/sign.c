#include <stdio.h>

int main(void){

	int whichsign(int n)
	{
	if(n >=0){
		putchar('+');
		putchar(',');
		printf("%d",n);
		putchar('\n');
	}
		else{
		putchar('-');
		putchar(',');
		printf("%d",n);
		putchar('\n');
		}
	}

	whichsign(-30);
	whichsign(20);
}

