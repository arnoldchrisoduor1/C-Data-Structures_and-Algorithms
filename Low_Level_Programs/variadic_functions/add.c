/**
 * INclude the stdarg.h
 * int fixedparam, ..
 * Define a va_list variable
 * Begin and end the argu list with va_start and var_end
 *
 */

#include <stdarg.h>
#include <stdio.h>

int add(int args, ...)
{
	va_list ap;
	va_start(ap,args);

	//process
	int i = 0,sum = 0;
	for(i =0;i <args; i++)
	{
		sum+= va_arg(ap,int);
	}
	va_end(ap);
	return sum;

}

int main(void)
{
	printf("ADD1 = %d\n",add(3,1,2,3));
	printf("ADD2 = %d\n",add(4,3,4,5,6));
	return 0;
}
