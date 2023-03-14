#include <stdio.h>
#define op 4

float add(float a,float b)
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
	int choice;
	float a, b;
	float (*ptr[op]) (float,float) = {add, sub, mult, divi};

	printf("\nChoose which operation 1.Addition, 2.Subtraction, 3.Mult, 4.Division:");
	scanf("%d",&choice);

	printf("\nGive two numbers:");
	scanf("%f %f",&a,&b);

	printf("The answer is: %f",ptr[choice](a,b));
	return 0;
}
