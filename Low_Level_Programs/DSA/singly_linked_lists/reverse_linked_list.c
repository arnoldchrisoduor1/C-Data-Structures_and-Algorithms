#include <stdio.h>
#include <stdlib.h>

struct node
{
	int data;
	struct node *link;
};

struct node* add_node(struct node *ptr, int data)
{
	struct node *temp = malloc(sizeof(struct node));
	temp->data = data;
	temp->link = NULL;

	ptr->link = temp;
	return temp;
}

struct node* reverse(struct node *head)
{
	struct node *prev = NULL;
	struct node *next = NULL;

	while(head!=NULL)
	{
		next = head->link;
		head->link = prev;
		prev = head;
		head = next;
	}
	head = prev;
	return head;
}

int main()
{
	struct node *head = (struct node*)malloc(sizeof(struct node));
	head->data = 98;
	head->link = NULL;

	struct node *ptr = head;

	ptr = add_node(ptr,93);
	ptr = add_node(ptr,88);
	ptr = add_node(ptr,77);
	ptr = add_node(ptr,66);

	head = reverse(head);

	ptr = head;

	while(ptr!=NULL)
	{
		printf("\n%d",ptr->data);
		ptr = ptr->link;
	}

	return 0;
}
