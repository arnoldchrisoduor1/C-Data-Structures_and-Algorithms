#include <stdio.h>

int main(){

	int is_alphabet(char c){

		if ((c>='a' && c <= 'z') || (c <='A' && c >= 'Z')){
			puts("\nThere's an alpabet present");
		}
		else{
			puts("\nNo alphabets here!");
		}
	}

	is_alphabet('x');
	is_alphabet('+');
}
