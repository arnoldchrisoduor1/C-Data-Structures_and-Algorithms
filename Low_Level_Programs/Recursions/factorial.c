#include <stdio.h>

int factorial(int n){
int res = 1;
int i = 1;

while (i <= n){
	res = res * i;
	i++;
}
return (res);
}
int main(void){
	int f = 
	f = factorial(9);
	printf("9! is %d",f);
	return(0);
}
