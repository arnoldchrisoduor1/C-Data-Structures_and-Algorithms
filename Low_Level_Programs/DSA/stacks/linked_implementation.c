#include <stdio.h>
#include <stdlib.h>

struct node
{
	int data;
	struct node *link;
} *top = NULL;

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

void print()
{
	struct node* temp;
	temp = top;
	printf("\nThe stack elements are: ");
	while(temp)
	{
		printf("%d", temp->data);
		temp = temp->link;
	}
}

int main()
{
	int data, choice;
	while(1)
	{
		printf("1. Push\n");
		printf("2. Print\n");
		printf("3. Quit\n");
		printf("Enter your choice: ");
		scanf("%d", &choice);


		switch(choice){
		case 1:
			printf("Enter the elements to be pushed: ");
			scanf("%d", &data);
			push(data);
			break;
		case 2:
			print();
			break;
		case 3:
			exit(1);
		default:
			printf("Wrong choice\n");
			break;
		}
	}
}


