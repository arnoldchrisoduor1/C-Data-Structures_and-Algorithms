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
	struct node *temp =  malloc(sizeof(struct node));
	temp->next = NULL;
	temp->data = data;
	temp->prev = NULL;

	head = temp;
	return head;
}

int main()
{
	struct node *head = (struct node*)malloc(sizeof(struct node));
	head->next = NULL;
	head->data = 98;
	head->prev = NULL;

	head = insert(head,97);

	struct node *ptr =  head;

	while(ptr!=NULL)
	{
		printf("%d",ptr->data);
		ptr = ptr->next;
	}
	return 0;
}
