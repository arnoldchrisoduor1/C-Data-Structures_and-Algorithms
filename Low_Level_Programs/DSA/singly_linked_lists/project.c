#include <stdio.h>
#include <stdlib.h>
void del_pstn(struct node **head,int pstn)
{
	struct node *current = *head;
	struct node *prev = *head;

	if(*head == NULL)
	{
		puts("There's no items in the linked list");
	}

	else if(pstn == 1)
	{
		*head = current->link;
		free(current);
		current = NULL;
	}

	else
		while(pstn!=1)
		{
			prev->link = current->link;
			current = current->link;
			pstn--;
		}
	prev->link = current->link;
	free(current);
	current = NULL;
}

void add_pstn(struct node *head,int data,int pstn)
{
	struct node *ptr2 = (struct node*)malloc(sizeof(struct node));
	ptr2->data = data;
	ptr2->link = NULL;

	struct node *ptr = head;

	position--;

	while(pstn!=1)
	{
		ptr = ptr->link;
		pstn--;
	}
	ptr2->link = ptr->link;
	ptr->link = ptr2;
}
