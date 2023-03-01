struct node *del last(struct node *head)
{
	if(head==NULL)
	{
		puts("The list is empty");
	}
	else if(head->link == NULL)
	{
		struct node *temp = head;
		temp = temp->link;
		free(temp);
		temp=NULL;
	}
	else
		struct node *temp = head;
		struct node *temp2 = head;

		while(temp->link !=NULL)
		{
			temp2 = temp;
			temp = temp->link;
		}

		free(temp);
		temp=NULL;
		temp2->link = NULL;
}

struct node *del_first(struct node *head)
{
	if(head==NULL)
	{
		puts("There's no list");
	}

	else
	{
		struct node *temp = head;
		head = head->link;
		free(temp);
	}
}
