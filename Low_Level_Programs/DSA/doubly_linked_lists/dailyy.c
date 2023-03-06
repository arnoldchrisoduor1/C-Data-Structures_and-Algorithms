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
	temp->prev = NULL;
	temp->data = data;
	temp->next = NULL;

	head = temp;
	return head;
}
struct node* addbeg(struct node *head, int data)
{
	struct node *temp = malloc(sizeof(struct node));
	temp->next = NULL;
	temp->data = data;
	temp->prev = NULL;

	temp->next = head;
	head->prev = temp;
	head = temp;
	return head;
}
struct node* addend(struct node *head, int data)
{
	struct node* temp, *tp;
	temp = malloc(sizeof(struct node));
	temp->next = NULL;
	temp->data = data;
	temp->prev = NULL;

	while(tp->next != NULL)
	{
		tp = tp->next;
	}

	temp->prev = tp;
	tp->next = temp;
	return head;
}
struct node* between(struct node *head,int data,int pstn)
{
	struct node *temp = head;
	struct node *temp2;
	struct node *newP;

	newP = insert(newP,56);

	while(pstn!=1)
	{
		temp = temp->next;
		pstn--;
	}
	temp2 = temp->next;

	newP->next = temp2;	
	newP->prev = temp;
	temp->next = newP;
	temp2->prev = newP;

	return head;
}
int main()
{
	struct node *head = NULL;

	head = insert(head,98);
	head = addbeg(head,97);
	head = addend(head,99);
	head = between(head,97,2);

	struct node *ptr = head;

	while(ptr!=NULL)
	{
		printf("\n%d",ptr->data);
		ptr = ptr->next;
	}

	return 0;
}
