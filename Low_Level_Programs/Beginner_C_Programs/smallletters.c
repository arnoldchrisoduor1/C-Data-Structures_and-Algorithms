#include <stdio.h>

int main(){

	int c;
	int x;
	int v;
	char alp[27] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";

	for(x = 0; x < 26; x++)
	{
		putchar(alp[x]);
	}

	putchar('\n');

	for(c ='a'; c < 'z'; c++){
		putchar(c);
	}

	putchar('\n');

	/*
	 * small letters in reverse
	 */

	for(v = 'z'; v >= 'a';v--)
	{
	putchar(v);
	}	
	 
	 

	return 0;
}
