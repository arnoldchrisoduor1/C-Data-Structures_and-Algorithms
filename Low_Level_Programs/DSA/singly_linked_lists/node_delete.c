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

struct node* del_last(struct node *head)
{
	if(head == NULL)
	{
		puts("The list is empty");
	}
	else if(head->link == NULL)
	{
		free(head);
		head = NULL;
	}
	else
	{
		struct node *temp = head;
		struct node *temp2 = head;

		while(temp->link!=NULL)
		{
			temp2 = temp;
			temp = temp->link;
		}

		free(temp);
		temp = NULL;
		temp2->link = NULL;
	}
	return head;
}

struct node* del_first(struct node *head)
{
	if(head==NULL)
	{
		puts("The list is empty");
	}
	else
	{
		struct node *ptr = head;
		head = head->link;
		free(ptr);
	}
	return head;
}

int main()
{
	struct node *head = malloc(sizeof(struct node));
	head->data = 98;
	head->link = NULL;

	struct node *ptr = head;

	ptr = add_node(ptr,93);
	ptr = add_node(ptr,73);
	ptr = add_node(ptr,55);
	ptr = add_node(ptr,44);

	head = del_last(head);
	head = del_first(head);

	ptr = head;

	while(ptr!=NULL)
	{
		printf("\n%d",ptr->data);
		ptr = ptr->link;
	}

	return 0;
}
