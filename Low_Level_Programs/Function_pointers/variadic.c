#include <stdio.h>
#include <stdarg.h>

int add(int args, ...){
	va_list ap;
	va_start(ap,args);

	int i; int sum = 0;
	for(i = 0;i < args; i++){
		sum+= va_arg(ap,int);
	}
	va_end(ap);
	return sum;
}

int main(void){
	printf("\nThe add:%d",add(4,6,7,8,9));
	return 0;
}
