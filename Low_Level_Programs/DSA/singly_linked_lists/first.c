#include <stdio.h>
#include <stdlib.h>

struct node
{
	int data;
	struct node *link;
};

int main()
{
	struct node *head;
	head = (struct node *)malloc(sizeof(struct node));

	head -> data = 98;
	head -> link = NULL;

	printf("\n%d",head->data);

	return 0;
}

