#include <stdio.h>
#include <stdlib.h>

struct node
{
	struct node *prev;
	int data;
	struct node *next;
};

struct node* insert(struct node *head,int data)
{
	struct node *temp  = malloc(sizeof(struct node));
	temp->next = NULL;
	temp->data = data;
	temp->prev = NULL;
	
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
struct node* addend(struct node *head,int data)
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
struct node* pstn(struct node *head, int data, int position)
{
	struct node* newP = NULL;
	struct node* temp = head;
	struct node* temp2 = NULL;
	newP = insert(newP,data);

	while(position!=1)
	{
		temp = temp->next;
		position--;
	}
	temp2 = temp->next;

	newP->prev = temp;
	newP->next = temp2;
	temp->next =  newP;
	temp2->prev = newP;

	return head;
}

int main()
{
	struct node *head = NULL;

	head = insert(head,98);
	head = addbeg(head,93);
	head = addend(head,99);
	head = pstn(head,97,2);

	struct node *ptr = head;

	while(ptr!=NULL)
	{
		printf("\n%d",ptr->data);
		ptr = ptr->next;
	}

	return 0;
}
