#include <stdio.h>
#include <stdlib.h>

struct node
{
	int data;
	struct node *link;
};

int main()
{
	struct node *head = malloc(sizeof(struct node));

	head -> data = 98;
	head -> link = NULL;

	printf("\nBefore head change: %d",head -> link);

	struct node *current = malloc(sizeof(struct node));

	current -> data = 45;
	current -> link = NULL;
	head -> link = current;

	printf("\nAfter change:%d",head ->link);

	return 0;
}

