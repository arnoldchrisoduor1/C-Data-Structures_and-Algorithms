#include <stdio.h>

int main(void){

	int absolute(int n){
		if(n < 0){
			n = n*-1;
			printf("\n%d",n);
		}
		else{
			printf("\n%d",n);
		}
	}

	absolute(-40);
	absolute(-69);
	absolute(56);
	absolute(-98);

	return 0;
}
