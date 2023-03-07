#include <stdio.h>
#include <stdlib.h>
struct node
{
	struct node *prev;
	int data;
	struct node *next;
};
struct node *insert(struct node *head,int data)
{
	struct node *temp = (struct node*)malloc(sizeof(struct node));
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
	struct node *temp,*tp;
	temp = malloc(sizeof(struct node));
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
int main()
{
	struct node *head = NULL;
	head = insert(head,98);
	head = addend(head,93);
	head = addend(head,73);

	puts("Before deletion");
	print(head);

	head  = delFirst(head);
	puts("After deletion");
	print(head);

	return 0;
}

