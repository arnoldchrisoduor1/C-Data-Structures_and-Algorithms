#include <stdio.h>
#include <stdlib.h>

struct node
{
	int data;
	struct node *link;
};

struct node* add_node(struct node *ptr,int data)
{
	struct node *temp = (struct node*)malloc(sizeof(struct node));

	temp->data = data;
	temp->link = NULL;

	ptr->link = temp;

	return temp;
}

int main()
{
	struct node *head = (struct node*)malloc(sizeof(struct node));

	head -> data = 98;
	head -> link = NULL;

	struct node *ptr = head;

	ptr = add_node(ptr,78);
	ptr = add_node(ptr,9);
	ptr = add_node(ptr,45);

	ptr = head;

	while(ptr!=NULL)
	{
		printf("\nValue:%d",ptr->data);
		ptr = ptr->link;
	}

	return 0;
}


