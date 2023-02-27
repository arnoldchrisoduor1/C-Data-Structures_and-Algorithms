#include <stdio.h>
#include <stdlib.h>

struct node
{
	int data;
	struct node *link;
};

struct node* add_node(struct node *ptr,int data)
{
	struct node *temp = malloc(sizeof(struct node));
	temp->data = data;
	temp->link = NULL;

	ptr->link = temp;

	return temp;
}

struct node* del_first(struct node *head)
{
	if(head == NULL)
	{
		puts("The list is empty");
	}
	else
	{
		struct node *temp = head;
		head = head->link;
		free(temp);
	}
	return head;
}

int main()
{
	struct node *head = malloc(sizeof(struct node));
	head->data = 98;
	head->link =NULL;

	struct node *ptr = head;

	ptr = add_node(ptr,56);
	ptr = add_node(ptr,78);
	ptr = add_node(ptr,93);

	head = del_first(head);

	ptr = head;

	while(ptr!=NULL)
	{
		printf("\n%d",ptr->data);
		ptr = ptr->link;
	}

	return 0;
}
