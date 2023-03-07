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
	struct node *temp  = malloc(sizeof(struct node));
	temp->next = NULL;
	temp->data = data;
	temp->prev = NULL;
	
	head = temp;
	return head;
}
void print(struct node *head)
{
	struct node *ptr = head;
	while(ptr!=NULL)
	{
		printf("\n%d",ptr->data);
		ptr = ptr->next;
	}
	putchar('\n');
}
struct node* addend(struct node *head, int data)
{
	struct node *temp = malloc(sizeof(struct node));
	struct node *tp;

	temp->next = NULL;
	temp->data = data;
	temp->prev = NULL;

	tp = head;
	while(tp->next!=NULL)
	{
		tp = tp->next;
	}
	tp->next = temp;
	temp->prev = tp;
	return head;
}
struct node* delFirst(struct node *head)
{
	head = head->next;
	free(head->prev);
	return head;
}
struct node* delLast(struct node *head)
{
	struct node *temp = head;
	struct node *temp2;

	while(temp->next!=NULL)
	{
		temp = temp->next;
	}
	temp2 = temp->prev;
	free(temp);
	temp2->next = NULL;
	temp = NULL;
	return head;
}
struct node *delInter(struct node *head, int position)
{
	struct node *temp = head;
	struct node *temp2;
	if(position == 1)
	{
		head = delFirst(head);
		return head;
	}
	while(temp->next!=NULL)
	{
		temp = temp->next;
	}
	if(temp->next == NULL)
	{
		head = delLast(head);
	}
	else
	{
		while(position > 1)
		{
			temp = temp->next;
			position--;
		}
		temp2 = temp->prev;
		temp2->next = temp->next;
		temp->next->prev = temp2;
		return head;
	}
}
int main()
{
	struct node *head = NULL;

	head = insert(head,98);
	head = addend(head,93);
	head = addend(head,78);
	head = addend(head,56);
	
	puts("Before deletion");
	print(head);

	puts("after deletion");

	head = delFirst(head);
	head = delLast(head);
	head = delInter(head,2);
	print(head);
	return 0;
}
