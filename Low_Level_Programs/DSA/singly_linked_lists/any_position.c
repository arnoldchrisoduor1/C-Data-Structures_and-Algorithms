#include <stdio.h>
#include <stdlib.h>

struct node
{
	int data;
	struct node *link;
};

struct node *add_end(struct node *head,int data)
{
	struct node *temp = malloc(sizeof(struct node));

	temp->data = data;
	temp->link = NULL;

	head->link = temp;

	return head;
}

int main()
{
	struct node *head = malloc(sizeof(struct node));

	head->data = 98;
	head->link = NULL;

	head = add_end(head,78);
	head = add_end(head,67);

	struct node *ptr = head;

	while(ptr!=NULL)
	{
		printf("\n%d",ptr->data);
		ptr=ptr->link;
	}

	return 0;
}

