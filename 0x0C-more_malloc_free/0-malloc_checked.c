#include "holberton.h"
#include <stdlib.h>

/**
 * malloc_checked- Function that allocates memory using malloc
 * @b:Size of memory allocated
 *
 * Return: Void *(pointer to all) if fails termination of process
 */

void *malloc_checked(unsigned int b)
{
	void *p;

	p = malloc(b);
	if (p == NULL)
	{
		exit(98);
	}

	return (p);
}
