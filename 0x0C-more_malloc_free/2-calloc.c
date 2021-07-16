#include "holberton.h"
#include <stdlib.h>

/**
 * _calloc- Function that allocates memory using malloc for an array
 * @nmemb:Number of members of array
 * @size: Size of byte
 *
 * Return: Void *(pointer to all) if fails termination of process
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *p;
	unsigned int *q;

	q = malloc(size * sizeof(size));

	p = malloc(nmemb * sizeof *q);
	p = NULL;
	if (p == NULL)
	{
		return (NULL);
	}
	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}

	return (p);
}
