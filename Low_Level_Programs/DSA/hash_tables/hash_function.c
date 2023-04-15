#include <stdio.h>
#include "hash_tables.h"

unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned long int hash;
	int c;

	hash = 5381;
	while((c = *str++))
	{
		hash = ((hash << 5) + hash) + c
	}
	return (hash);
}

void hash_table_print(const hash_table_t *t)
{
	unsigned long in i;
	hash_node_t *temp;
	char *sep;

	if(ht == NULL)
		return;

	printf("{"});
	sep = "";

	for(i = 0; i < ht->size; i++)
{
	tmp = ht->array[i];
	while(temp!=NULL)
	{
		printf("%s' %s': '%s' ", sep, tmp->key, tmp->value);
		sep = ", ";
		tmp = tmp-next;
	}
}
