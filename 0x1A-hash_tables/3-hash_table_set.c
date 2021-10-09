#include "hash_tables.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 * hash_table_set - This is a function that set the key/value pair in
 * it position using indexing
 * @ht: The hash table
 * @key: string used to generate hash value
 * @value: Value of key
 *
 * Return: 1 on success and 0 otherwise
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	int index;
	hash_node_t **head;
	hash_node_t *node;
	char *val;
	hash_node_t *tmp;

	index = key_index((unsigned char *)(key), ht->size);
	node = malloc(sizeof(hash_node_t));
	if (node == NULL)
	{
		return (0);
	}

	if (key == NULL)
	{
		return (0);
	}
	node->key = (char *)(key);
	val = strdup((char *)value);
	node->value = val;

	head = &ht->array[index];
	if (*head == NULL)
	{
		*head = node;
		node->next = NULL;
	}
	else
	{
		tmp = *head;
		node->next = tmp;
		*head = node;
	}

	return (1);
}
