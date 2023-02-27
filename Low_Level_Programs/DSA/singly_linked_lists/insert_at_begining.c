#include <stdio.h>
#include <stdlib.h>

struct node
{
	int data;
	struct node *link;
};

struct node* add_beg(struct node *head,int n)
{
	struct node *ptr = malloc(sizeof(struct node));

	ptr->data = n;
	ptr->link = NULL;

	ptr->link = head;
	head = ptr;

	return head;
}

int main()
{
	struct node *head = malloc(sizeof(struct node));

	head->data = 98;
	head-> link = NULL;

	struct node *ptr = malloc(sizeof(struct node));
	ptr->data = 88;
	ptr->link = NULL;

	head->link = ptr;

	int data = 77;

	head = add_beg(head,data);

	ptr = head;

	while(ptr!=NULL)
	{
		printf("\n%d",ptr->data);
		ptr = ptr->link;
	}

	return 0;
}


