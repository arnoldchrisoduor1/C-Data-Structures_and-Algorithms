#include <stdio.h>
#include <stdlib.h>

struct node
{
	int data;
	struct node *link;
};

struct node* add_node(struct node *ptr,int data)
{
	struct node *temp  = (struct node*)malloc(sizeof(struct node));

	temp->data = data;
	temp->link = NULL;

	ptr->link = temp;

	return temp;
}

void add_at_pstn(struct node *head,int data,int position)
{
	struct node *ptr = head;
	struct node *ptr2 = malloc(sizeof(struct node));

	ptr2->data = data;
	ptr2->link = NULL;

	position--;
	while(position!=1)
	{
		ptr = ptr->link;
		position--;
	}

	ptr2->link = ptr->link;
	ptr->link = ptr2;
}
int main()
{
	struct node *head = malloc(sizeof(struct node));

	head->data = 98;
	head->link = NULL;

	struct node *ptr = head;

	ptr = add_node(ptr,65);
	ptr = add_node(ptr,78);

	int data = 88, position = 3;

	add_at_pstn(head,data,position);

	ptr = head;

	while(ptr!=NULL)
	{
		printf("\n%d",ptr->data);
		ptr = ptr->link;
	}
	return 0;
}
