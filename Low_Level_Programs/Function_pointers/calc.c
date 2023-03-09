#include <stdio.h>
#define op 4
float sum(float a,float b)
{
	return a+b;
}
float sub(float a,float b)
{
	return a-b;
}
float mult(float a,float b)
{
	return a*b;
}
float divi(float a,float b)
{
	return a/b;
}

int main()
{
	float(*ptr[op]) (float,float) = {sum,sub,mult,divi};
	int choice;
	int a,b;

	printf("\nWhat operation do you want to do? 1. Sum, 2.Sub, 3.Mult, 4.Divi: ");
	scanf("%d",&choice);
	printf("\nGive two numbers:");
	scanf("%f %f",&a,&b);

	printf("\nAnswer is :%f",ptr[choice](a,b));
	return 0;
}
