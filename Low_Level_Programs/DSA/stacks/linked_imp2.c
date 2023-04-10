#include <stdio.h>
#include <stdlib.h>

struct node
{
	int data;
	struct node *link;
} *top = NULL;

int isEmpty()
{
	if(top == NULL)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}

void print()
{
	struct node* temp;
	temp = top;
	printf("\nThe elements in the stack are: ");

	while(temp)
	{
		printf("%d",temp->data);
		temp = temp->link;
	}
	printf("\n");
}

int peek()
{
	if(isEmpty())
	{
		printf("\nStack Underflow");
		exit(1);
	}
	return top->data;
}
int pop()
{
	struct node* temp;
	temp = top;
	if(isEmpty())
	{
		printf("Stack Underflow");
		exit(1);
	}
	int val = top->data;

	top = top->link;
	free(temp);
	temp = NULL;
	return val;
}

void push(int data)
{
	struct node* newNode;
	newNode = malloc(sizeof(newNode));
	if(newNode == NULL)
	{
		printf("\nStack Overflow");
		exit(1);
	}
	newNode->data = data;
	newNode->link = top;

	top = newNode;
}

int main()
{
	int data, choice;
	while(1)
	{
		printf("1. Push\n");
		printf("2. Pop\n");
		printf("3. Print top element\n");
		printf("4. Print all elements\n");
		printf("5. Quit\n");
		printf("Please enter your choice\n");
		scanf("%d",&choice);

		switch(choice){
		case 1:
			printf("Enter the elements to be pushed: \n");
			scanf("%d",&data);
			push(data);
			break;
		case 2:
			data = pop();
			printf("The deleted element is: %d\n",data);
			break;
		case 3:
			printf("The top most element is %d\n",peek());
		case 4:
			print();
			break;
		case 5:
			exit(1);
		default:
			printf("Not a valid choice\n");
		}
	}

return 0;
}
