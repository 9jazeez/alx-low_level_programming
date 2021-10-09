#include "hash_tables.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 * hash_table_delete - This is a function that delete hash table
 * @ht: The hash table
 *
 * Return: void
 */

void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *head;
	hash_node_t *node;
	hash_node_t *tmp;

	for (i = 0; i < ht->size; i++)
	{
		head = ht->array[i];
		if (head == NULL)
		{
			;
		}
		else
		{
			tmp = head;
			while (tmp != NULL)
			{
				node = tmp;
				tmp = tmp->next;
				/*free((void *)node->key);*/
				free((void *)node->value);
				free(node);
			}
		}
	}
	free((void *)ht->size);
	free(ht->array);
	free(ht);
	ht = NULL;
}
