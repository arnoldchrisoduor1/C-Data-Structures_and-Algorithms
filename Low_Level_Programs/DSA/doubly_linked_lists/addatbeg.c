#include <stdio.h>
#include <stdlib.h>

struct node
{
	struct node *next;
	int data;
	struct node *prev;
};

struct node* addbeg(struct node *head,int data)
{
	struct node *temp = (struct node*)malloc(sizeof(struct node));
	temp->prev = NULL;
	temp->data = data;
	temp->next = NULL;

	head = temp;
	return head;
}

struct node* insert(struct node *head,int data)
{
	struct node *temp = (struct node*)malloc(sizeof(struct node));
	temp->prev = NULL;
	temp->data = data;
	temp->next = NULL;

	temp->next = head;
	head->prev = temp;
	head = temp;
	return head;
}

int main()
{
	struct node *head = NULL;

	head = addbeg(head,45);
	struct node *ptr = head;
	head = insert(head,98);

	ptr = head;
	while(ptr!=NULL)
	{
		printf("\n%d",ptr->data);
		ptr = ptr->next;
	}

	return 0;
}
