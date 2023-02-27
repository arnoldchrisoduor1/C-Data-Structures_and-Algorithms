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

void to_pstn(struct node *head,int position,int data)
{
	struct node *ptr2 = malloc(sizeof(struct node));
	ptr2 -> data = data;
	ptr2->link = NULL;

	struct node *ptr = head;

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
	struct node *head = (struct node*)malloc(sizeof(struct node));
	head->data = 78;
	head->link = NULL;

	struct node *ptr = head;

	ptr = add_node(ptr,98);
	ptr = add_node(ptr,56);

	int data = 44, position = 2;

	to_pstn(head,position,data);

	ptr = head;

	while(ptr!=NULL)
	{
		printf("\n%d",ptr->data);
		ptr = ptr->link;
	}

	return 0;
}

