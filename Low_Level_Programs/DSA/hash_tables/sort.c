#include "hash_tables.h"
#include <stdio.h>

void add_i_shash(shash_table_t *ht, shash_node_t *new)
{
	shash_node_t *tmp1, tmp2;
	int ret;

	tmp1 = tmp2 = ht->shead;

	while(tmp1!=NULL)
	{
		ret = strcmp(new->key, tmp->key);
		if(ret == 0)
		{
			return;
		}
		else if (ret < 0)
		{
			new->sprev = tmp1->sprev;
			if(tmp1->sprev)
				temp->sprev->snext = new;
			else
				ht->shead = new;

			tmp1->sprev = new;
			new->snext = tmp1;
			
			return;
		}
			tmp2 = tmp1;
			tmp1 = tmp->next;
	}

	new->sprev = tmp2;
	new->snext = NULL;

shash_table_t *shash_table_create(unsigned long int size)
{

	shash_table_t *table;
	shash_node_t **array;
	unsigned long int i;

	table = malloc(sizeof(shash_table_t));
	if (table == NULL)
		return NULL;

	array = malloc(sizeof(shash_node_t *) *size);
	if(array == NULL)
		return NULL;

	for(i = 0; i < size; i++)
		array[i] = NULL;



	table->array = array;
	table->size = size;
	table->shead=NULL;
	table->stail = NULL;

	return (table);

}
