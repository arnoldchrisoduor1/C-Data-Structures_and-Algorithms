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
struct node* delLast(struct node *head)
{
	struct node *temp  = head;
	struct node *temp2;

	while(temp->next!=NULL)
	{
		temp = temp->next;
	}
	temp2 = temp->prev;
	free(temp);
	temp = NULL;
	temp2->next = NULL;
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

	head  = delLast(head);
	puts("After deletion");
	print(head);

	return 0;
}

