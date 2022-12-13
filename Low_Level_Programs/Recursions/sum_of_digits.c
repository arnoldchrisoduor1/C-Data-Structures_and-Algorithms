#include <stdio.h>

unsigned int sum(unsigned int num){
	if (num == 0){
		return 0;
	}
	return (num % 10) + sum(num/10);
}
int main(){
	int i;
	puts("What number do you want summed up ?:");
	scanf("%d",&i);
	printf("%d\n",sum(i));
			return 0;
			}
