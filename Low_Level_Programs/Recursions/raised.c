#include <stdio.h>

int main(void)
{
	int raised(int x, int y)
	{
		if(y < -1)
			return(-1);
		else if(y == 0)
			return (1);
		else
			return(x * raised(x,y - 1));
	}

	int x,y,z;

	z = raised(2,3);
	x = raised(6,4);
	y = raised(5,2);

	printf("\n%d",z);
	printf("\n%d",x);
	printf("\n%d",y);

	return 0;
}
					
