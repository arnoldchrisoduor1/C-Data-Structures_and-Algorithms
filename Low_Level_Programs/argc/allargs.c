#include <stdio.h>

int main(int argc, char *argv[]){
	int count;

	if(argc > 1){
		for (count = 1;count< argc;count++){
			printf("The args are: %s",argv[count]);
		}
	}
	return 0;
}

