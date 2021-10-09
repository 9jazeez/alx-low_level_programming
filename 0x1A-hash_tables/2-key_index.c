#include "hash_tables.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 * key_index - This is the hash function for creating key index pair
 * @key: string used to generate hash value
 * @size: Size of hash table
 *
 * Return: hash index for key/value pair
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hash;
	int index;

	hash = hash_djb2(key);
	index = hash % size;

	return (index);
}
