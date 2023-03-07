#include <stdio.h>
#include <stdlib.h>

struct node
{
	struct node *prev;
	int data;
	struct node *next;
};
void print(struct node *head)
{
	struct node *ptr = head;
	while(ptr!=NULL)
	{
		printf("\n%d",ptr->data);
		ptr = ptr->next;
	}
}
struct node* insert(struct node *head,int data)
{
	struct node *temp = (struct node*)malloc(sizeof(struct node));
	temp->next = NULL;
	temp->data = data;
	temp->prev = NULL;

	head = temp;
	return head;
}
struct node* addend(struct node *head,int data)
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
struct node* create(struct node *head)
{
	int data,i,n;
	printf("How many nodes:");
	scanf("%d",&n);

	if(n==0)
		return head;

	printf("Give data for the first node:");
	scanf("%d",&data);
	head = insert(head,data);

	for(i=1; i<n; i++)
	{
		printf("Give the data for node %d:",i+1);
		scanf("%d",&data);
		head = addend(head,data);
	}
	return head;
}
struct node* reverse(struct node *head)
{
	struct node *ptr1 = head;
	struct node *ptr2 = ptr1->next;

	ptr1->next = NULL;
	ptr1->prev = ptr2;

	while(ptr2!= NULL)
	{
		ptr2->prev = ptr2->next;
		ptr2->next = ptr1;
		ptr1 = ptr2;
		ptr2 = ptr2->prev;
	}
	head = ptr1;
	return head;
}
int main()
{
	struct node *head = NULL;

	head = create(head);
	puts("Before reverse");
	print(head);

	puts("After reverse");
	head = reverse(head);
	print(head);

	print(head);
	return 0;
}
