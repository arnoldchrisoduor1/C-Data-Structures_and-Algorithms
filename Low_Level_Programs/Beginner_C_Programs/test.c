#include <stdio.h>

int main(void){
	int lastdigit(int n)
	{
		n = n%10;
		putchar(n + '0');
		putchar('\n');
	}

	lastdigit(789);
	lastdigit(657);
	lastdigit(8696);

	return 0;
}
