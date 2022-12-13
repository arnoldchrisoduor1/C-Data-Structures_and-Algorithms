#include <stdio.h>
#include <stdlib.h>

int main(){

int a,b;
char option[3];

int ans = 0;

while (option[0] != 'x'){

puts("\nWhat would you like to do?");

puts("\nm: multiply numbers \na: add \ns:subtract \nd:divide");

scanf("%c",&option);


puts("Type your first number:");
scanf("%d",&a);
puts("Type your second number:");
scanf("%d",&b);

ans = 0;

	switch(option[0]){
	case 'm':
		ans = (a*b);
			break;
	case 'a':
			ans = (a+b);
			break;
	case 's':
			ans = (a-b);
			break;
	case 'd':
			ans= (a/b);
			break;
	case 'x':
			continue;
	default:
			puts("\nPlease give a valid option");
			continue;
	}

printf("\nYour answer is %d",ans);
}
puts("\nThank you for using Arnold's Software");

return (0);
}


