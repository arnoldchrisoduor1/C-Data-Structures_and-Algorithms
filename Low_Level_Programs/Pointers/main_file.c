#include <stdio.h>

void swap_values(int *a,int *b){

	int c;
	 c= *a;
	 *a = *b;
	 *b = c;
}

int str_len(char *s){

	int count = 0;

		while(*(s + count) != '\0'){
			count++;
		}
	return (count);
}

void _puts(char *c){
	int i = 0;
	while(*(c + i) != '\0'){
	putchar(*(c+i));
	i++;
	}
	putchar(10);
}

int _atoi(char *s){
	int sign = 1;
	unsigned int num= 0;

	do{
		if(*s == '-')
			*s *= sign;
		
		else if((*s > '0') && (*s < '9'))
			num = num * 10 + (*s - '0');
		else if (num > 10)
			break;
	} while
		(*s++);
	return (num * sign);
	
}

char *_strcat(char *str1, char *str2){
	int i = 0;
	int j = 0;

	while(str1[i] != '\0'){
		i++;
	}
	while(str2[j] != '\0'){
		str1[i] = str2[2];
		j++;
		i++;
	}
	str1[i] = '\0';
	return(str1);
}

char *to_upper(char *s){
	int count = 0;

	while(*(s + count) != '\0'){
		if ((*(s + count) >=97) && (*(s + count) <= 122))
		       *(s + count) = *(s + count) -32;
		       count++;
	}
	return (s);
}
