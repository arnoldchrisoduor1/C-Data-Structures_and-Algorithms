#include <stdio.h>
#include <stdlib.h>

struct node
{
	int data;
	struct node *link;
};

struct node* add_node(struct node *ptr,int data)
{
	struct node *temp = malloc(sizeof(struct node));
	temp->data = data;
	temp->link = NULL;

	ptr->link = temp;
	return temp;
}

void del_pstn(struct node **head,int position)
{
	struct node *previous = *head;
	struct node *current = *head;

	if(*head == NULL)
	{
		puts("There's no list here");
	}
	else if(position == 1)
	{
		*head = current->link;
		free(current);
		current = NULL;
	}
	else
	{
		while(position!=1)
		{
			previous->link = current->link;
			current = current->link;
			position--;
		}
		previous->link = current->link;
		free(current);
		current = NULL;
	}
}

int main()
{
	struct node *head = malloc(sizeof(struct node));
	head->data = 98;
	head->link = NULL;

	struct node *ptr = head;

	ptr = add_node(ptr,88);
	ptr = add_node(ptr,77);
	ptr = add_node(ptr,66);
	ptr = add_node(ptr,55);
	ptr = add_node(ptr,44);

	int position = 3;

	del_pstn(&head,position);

	ptr = head;

	while(ptr!=NULL)
	{
		printf("\n%d",ptr->data);
		ptr = ptr->link;
	}
	return 0;
}
