#include <stdio.h>
#include "dog.h"

int main(void){

	struct dog my_dog;

	my_dog.name = "Rex";
	my_dog.owner = "Rolex";
	my_dog.age = 5;

	printf("\nName:%s \nOwner:%s \nAge:%d",my_dog.name,my_dog.owner,my_dog.age);
	return 0;
}
