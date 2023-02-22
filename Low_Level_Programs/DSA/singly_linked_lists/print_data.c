#include <stdio.h>

void print_data(struct node *head)
{
	if(head == NULL)
		puts("The list is empty");

	struct node *ptr = NULL;
	ptr = head;

	while(ptr != NULL)
	{
		printf("\n%d",ptr->data);
		ptr = ptr->link;
	}
}

