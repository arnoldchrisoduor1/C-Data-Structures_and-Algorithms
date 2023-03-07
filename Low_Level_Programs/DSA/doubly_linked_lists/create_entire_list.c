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
	struct node *temp = (struct node*)malloc(sizeof(struct node));
	temp->next = NULL;
	temp->data = data;
	temp->prev = NULL;

	head = temp;
	return head;
}
struct node* addend(struct node *head, int data)
{
	struct node* temp,*tp;
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
struct node* createList(struct node *head)
{
	int n, data, i;
	puts("How many nodes do you want to create:");
	scanf("%d",&n);

	if(n==0)
		return head;

	puts("Give the data for the first node");
	scanf("%d",&data);
	head = insert(head,data);

	for(i=1; i<n; i++)
	{
		printf("Data for node %d:",i+1);
		scanf("%d",&data);
		head = addend(head,data);
	}
	return head;
}

int main()
{
	struct node *head = NULL;
	struct node *ptr;

	head = createList(head);
	ptr = head;

	while(ptr!=NULL)
	{
		printf("\n%d",ptr->data);
		ptr=ptr->next;
	}

	return 0;
}
