#include <stdio.h>
#include <stdlib.h>

void count_nodes(struct node *head)
{
	int count = 0;
	struct node *ptr = NULL;
	ptr = head;

	while(ptr != NULL)
	{
		count++;
		ptr = ptr->link;
	}
	printf("\nNumber of nodes:%d",count);
}

void print_nodes(struct node *head)
{
	struct node *ptr = NULL;
	ptr = head;

	while(ptr != NULL)
	{
		printf("\n%d",ptr->data);
		ptr=ptr->link;
	}
}

void add_node(struct node *head, *data)
{
	struct node *temp *ptr;

	temp = (struct node*)malloc(sizeof(struct node));

	temp -> data = data;
	temp -> link = NULL;

	ptr = head;

	while(ptr->link != NULL)
	{
		ptr = ptr->link;
	}
	ptr->link = temp;
}

