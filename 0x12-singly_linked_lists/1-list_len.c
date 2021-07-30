#include "lists.h"
#include <stdio.h>

/**
 * list_len - Function that returns the number of elements in a linked list
 * @h: Pointer to link list
 *
 * Return: number of elements
 */

size_t list_len(const list_t *h)
{
	size_t n;

	n = 0;
	while (h != NULL)
	{
		h = h->next;
		n++;
	}

	return (n);
}
