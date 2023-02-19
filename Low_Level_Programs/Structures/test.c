#include <stdio.h>

struct {
	char *engine;
	char *model;
	int mileage;
 } car1,car2;


int main()
{
	car1.engine = "Mercedes AMG";
	car2.engine = "Audi V8";
	car1.mileage = 78;

	printf("\nCar1 Mileage: %d",car1.mileage);
	printf("\nCar2 Engine:%s",car2.engine);

	return 0;
}
			
