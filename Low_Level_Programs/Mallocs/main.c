#include <stdlib.h>
#include <stdio.h>

char _strup(char *str){
	char *strout;
	unsigned int i,j;

	if (str == NULL)
		return (NULL);
	
	for (i = 0;str[i]!='\0';i++)
		strout = (char*)malloc(sizeof(char) * (i+1));
	
	if(strout == NULL)
		return (NULL);
	for(j=0;j<i;j++)
		strout[j] = str[j];
			return(strout);
}

void *checker(unsigned int b){
	char *p;
	p = malloc(b);

	if (p == NULL)
		exit (98);
	else
		return(p);
}
