#include <stdio.h>
#include <stdlib.h>

struct node
{
	int data;
	struct node *link;
};

int main()
{
	struct node *head = malloc(sizeof(struct node));

	head -> data = 45;
	head -> link = NULL;

	printf("\nHead link before: %d",head -> link);

	struct node *second = malloc(sizeof(struct node));

	second -> data = 98;
	second -> link = NULL;
	head -> link = second;

	printf("\nHead link after:%d",head -> link);
	printf("\nSecond link before:%d",second -> link);

	second = malloc(sizeof(struct node));

	second -> data = 78;
	second -> link = NULL;
	head -> link -> link = second;

	printf("\nSecond after change:%d",second -> link);

	return 0;
}
