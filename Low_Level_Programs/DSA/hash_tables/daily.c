#include <stdio.h>

int main()
{
	void half(char *p){
		int i;
		int count;
		int nus;

		while(*(p + count) != '\0'){
			count++;
		}
		nus = (count)/2;

		printf("\nHalf the number of characters should be: ",nus);

		for(i=0;i<nus;i++){
			putchar(*(p + i));
		}
	
	}

	char *str;

	str = "Hello there, this is the string to be halved";
	
	half(str);

	return 0;
}

	
