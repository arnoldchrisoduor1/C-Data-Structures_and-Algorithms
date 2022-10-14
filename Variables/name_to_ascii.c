#include <stdio.h>
#include <stdlib.h>

int main(void){
	
	int i = 0;
	int sum;
	char name[10];

	puts("Please input your name::\n");

	scanf("%s",&name);

	while(name[i] != '\0'){

	printf("The ASCII of %c is %d\n",name[i],name[i]);

	sum = sum+name[i];
	i++;
	}

	printf("The sum of your name is : %d\n",sum);

	return (0);


}
