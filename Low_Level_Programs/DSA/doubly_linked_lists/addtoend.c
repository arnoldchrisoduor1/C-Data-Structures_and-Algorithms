#include <stdio.h>
#include <stdlib.h>

struct node
{
	struct node *prev;
	int data;
	struct node *next;
};

struct node* insert(struct node *head, int data)
{
	struct node *temp = malloc(sizeof(struct node));
	temp->next = NULL;
	temp->data = data;
	temp->prev = NULL;

	head = temp;
	return head;
}

struct node* addtobeg(struct node *head, int data)
{
	struct node *temp = malloc(sizeof(struct node));
	temp->next = NULL;
	temp->data = data;
	temp->prev = NULL;

	temp->next = head;
	head->prev= temp;
	head = temp;
	return head;
}

struct node* addtoend(struct node *head, int data)
{
	struct node* temp, *tp;
	temp = malloc(sizeof(struct node));
	temp->prev = NULL;
	temp->data = data;
	temp->next = NULL;

	while(tp->next!=NULL)
	{
		tp = tp->next;
	}

	temp->prev = tp;
	tp->next = temp;
	return head;
}


int main()
{
	struct node *head = NULL;

	head = insert(head,99);
	head = addtobeg(head,98);
	head = addtoend(head,93);

	struct node *ptr = head;
	while(ptr!=NULL)
	{
		printf("\n%d",ptr->data);
		ptr = ptr->next;
	}

	return 0;
}
