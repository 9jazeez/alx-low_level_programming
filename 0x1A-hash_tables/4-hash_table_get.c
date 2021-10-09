#include "hash_tables.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 * hash_table_get - This is a function searches the key/value pair in
 * it position using indexing
 * @ht: The hash table
 * @key: string used to generate hash value
 *
 * Return: Pointer to the value
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	int index;
	hash_node_t *head;
	hash_node_t *tmp;

	index = key_index((unsigned char *)(key), ht->size);

	head = ht->array[index];
	if (head == NULL)
	{
		return (NULL);
	}
	else
	{
		tmp = head;
		while (tmp != NULL)
		{
			if (strcmp(tmp->key, (char *)(key)) == 0)
			{
				return (tmp->value);
			}
			tmp = tmp->next;
		}
		return (NULL);
	}
}
