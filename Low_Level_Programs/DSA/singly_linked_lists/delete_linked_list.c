#include <stdio.h>
#include <stdlib.h>

struct node
{
	int data;
	struct node *link;
};

struct node* add_node(struct node *ptr,int data)
{
	struct node *temp = (struct node*)malloc(sizeof(struct node));
	temp->data = data;
	temp->link = NULL;

	ptr->link = temp;
	return temp;
}

struct node* del(struct node *head)
{
	struct node *temp = head;

	while(temp!=NULL)
	{
		temp = temp->link;
		free(head);
		head = temp;
	}
	return head;
}

int main()
{
	struct node *head = (struct node*)malloc(sizeof(struct node));
	head->data = 98;
	head->link = NULL;

	struct node *ptr = head;

	ptr = add_node(ptr,63);
	ptr = add_node(ptr,76);

	ptr = head;

	printf("\nThe linked list has been created with the following values");

	while(ptr!=NULL)
	{
		printf("\n%d",ptr->data);
		ptr = ptr->link;
	}

	head = del(head);

	putchar('\n');
	
	if(head == NULL)
	{
		puts("The linked list has been successfully deleted");
	}
	else
	{
		puts("Deletion did not work");
	}

	return 0;
}

