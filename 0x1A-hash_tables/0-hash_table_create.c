#include "hash_tables.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 * hash_table_create - An hash_table with the chaining algorithm
 *
 * @size: Size of the array used as hash table
 *
 * Return: A pointer to the hash table
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *table;
	hash_node_t **array;

	table = malloc(sizeof(hash_table_t));
	array = malloc(sizeof(long int) * size);
	if (table == NULL)
	{
		return (NULL);
	}

	table->size = size;
	table->array = array;

	return (table);
}
