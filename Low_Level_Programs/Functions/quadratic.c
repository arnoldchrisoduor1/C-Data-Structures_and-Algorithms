#include <stdio.h>
#include <math.h>

int main(void)
{
	int a,b,c,d;
	double root1,root2;

	printf("\nEnter a,b,c where a*x*x + b*x + c = 0");
	puts("Enter a");
	scanf("%d",&a);
	puts("Enter b");
	scanf("%d",&b);
	puts("Enter c");
	scanf("%d",&c);

	printf("\nValues of a = %d\nb =%d\nc = %d",a,b,c);

	d = b*b-4*a*c;

	if(d<0)
	{
		printf("\nFirst root = %.2lf + i.%2lf",-b/(double)(2*a),sqrt(-d)/2*a);
		printf("\nSecond root = %.2lf - i.%2lf",-b/(double)(2*a),sqrt(-d)/2*a);
	}
	else
	{
		root1 = (-b + sqrt(d)/2*a);
		root2 = (-b - sqrt(d)/2*a);

		printf("\nFirst root",root1);
		printf("\nSecond root",root2);


	}
	return 0;
}
