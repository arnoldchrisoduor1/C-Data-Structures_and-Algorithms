#include <stdio.h>

int main(){

	int a,b = 0;
	char options[2];
	int answer = 0;

	puts("\nWELCOME TO ADVANCED TERMINAL CALCULATOR !");


	while (options[0] != 'x'){
	puts("\nThis is Arnold's Software, what do you want to do?");
	puts("a: Addition \ns: Subtration \nm: Multiplication \nd: Division \nx: Leave");

	scanf("%c",&options);

	if (options[0] == 'x'){
		continue;
	}
		else{

	
		puts("\nPlease input your first number: ");

		scanf("%d",&a);

		puts("\nPlease input your second number: ");

		scanf("%d",&b);

		switch(options[0]){
		case 'x':
			continue;
		case 'a':
				answer = a+b;
				break;
		case 's':
				answer = a-b;
				break;
		case 'm':
				answer  = a*b;
				break;
		case 'd':
				answer = a/b;
				break;
		default:
				puts("This is not a valid input");
		}

		printf("\nYour answer is: %d", answer);

		}

	}

puts("\nProgram exited successfully !");

return 0;
}
