#include <stdio.h>

/*
 * Changing locations
 *
 */

void south_east( int *lat, int *lon){
	*lat = *lat -1;
	*lon = *lon +1;
}

int main(){
	int latitude = 32;
	int longitude = -73;

	printf("\nThe old location was: [%d,%d]",latitude,longitude);

	south_east(&latitude, &longitude);

	printf("The new position is: [%i,%i]",latitude,longitude);
	return 0;
}
