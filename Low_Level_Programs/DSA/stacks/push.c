#include <stdio.h>
#define MAX 4

int stack_arr[MAX];
int top = -1;

void push(int data)
{
	if(top == MAX-1)
	{
		printf("\nStack Overflow");
		return;
	}
	top = top+1;
	stack_arr[top] = data;
}
void print(int *stack_arr)
{
	int i;
	len = sizeof(stack_arr)/sizeof(stack_arr[0]);

	for(i = 0; i< len;i++)
	{
		print("%d, ",stack_arr[i])
	}
}
int main()
{
	push(1);
	push(2);

	print();
	return 0;
}
