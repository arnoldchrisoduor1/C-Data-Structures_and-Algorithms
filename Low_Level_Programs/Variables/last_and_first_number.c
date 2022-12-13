#include <stdio.h>
#include <stdlib.h>

int main(void){
	int l,f,n = 0;

	puts("Give a number of any size :: \n");

	scanf("%d",&n);

	l = n%10;

	while(n >= 10){
		n = n/10;
	}

	f=n;

	printf("The first number is: %d\n",f);
	printf("The last number is: %d\n",l);
return(0);
}

