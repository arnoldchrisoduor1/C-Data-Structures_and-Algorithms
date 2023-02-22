#include <stdio.h>

void count_of_nodes(struct node *head)
{
	int count == 0;
	if(head == NULL)
		puts("The list is empty!");
	struct node *ptr = NULL;
	ptr = head;

	while( ptr != NULL)
	{
		count++;
		ptr = ptr -> link;
	}

	printf("\n%d",count);
}
