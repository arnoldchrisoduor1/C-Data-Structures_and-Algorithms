#include <stdio.h>
#include <stdlib.h>

typedef struct car
{
	char model[20];
	int mileage;
	int year;
} car;

int head()
{
	car audi = {.model = "AUDI", .mileage = 9876, .year = 2023};

	return (audi.year);
}

int main(void)
{
	car mercedes = {.model = "s550", .year = 2023, .mileage =  0};

	car bmw = {.model = "i7", .year = 2023, .mileage = 0};

	printf("\nCar 1 model:%s",mercedes.model);

	printf("\nCar 2 model:%s",bmw.model);

	printf("\nFunction car:%s",head());

	return 0;
}
