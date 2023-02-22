#include <stdio.h>
#include <stdlib.h>

void count_list(struct node *head)
{
	if(head == NULL)
		puts("The list is empty!");
	struct node *ptr = NULL;
	ptr = head;

	while(ptr != NULL)
	{
		count++;
		ptr=ptr->link;
	}

	printf("\nNumber of nodes is:%d",count);
}

void print_list(struct node *head)
{
	if(head == NULL)
		puts("The list is empty!");

	struct node *ptr = NULL;
	ptr = head;

	while(ptr != NULL)
	{
		printf("\n%d",ptr->data);
		ptr= ptr->link;
	}
}
void add_to_end(struct *head,int data)
{
	struct node *temp *ptr;

	temp = (struct node*)malloc(sizeof(struct node));

	temp ->data = data;
	temp ->link = NULL;

	ptr = head;

	while(ptr->link != NULL)
	{
		ptr = ptr->link;
	}
	ptr->link = temp;
}

