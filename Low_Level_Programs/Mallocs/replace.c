#include <stdio.h>

int main(){
	char *s;
	s = _strup("ALX SE");

	if (s == NULL){
		printf("Error! unable to allocate memory");
		return 1;
	}

	printf("%s",s);
	return 0;
}
