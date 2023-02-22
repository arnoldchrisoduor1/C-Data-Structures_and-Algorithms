#include <stdio.h>
#include <stdlib.c>

void_add_to_end(struct node *head, *data)
{
	struct node *temp *ptr;
	ptr = head;

	temp =(struct node*) malloc(sizeof(struct node));

	temp -> data = data;
	temp -> link = NULL;

	while(ptr->link != NULL)
	{
		ptr = ptr->link;
	}
	ptr -> link = temp;
}
