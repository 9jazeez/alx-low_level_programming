#include "hash_tables.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 * hash_table_print - This is a function that prints the key/value pair
 * in the hash table
 * @ht: The hash table
 *
 * Return: void
 */

void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i;

	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		print_list(ht->array[i]);
	}
	printf("}\n");

}

/**
 * print_list - A function that prints a linked list
 * @node: Head of linked list
 *
 * Return: Void
 */

void print_list(hash_node_t *node)
{
	if (node == NULL)
	{
		return;
	}
	else
	{
		while (node != NULL)
		{
			printf("'%s' : '%s', ", node->key, node->value);
			node = node->next;
		}
	}
}
