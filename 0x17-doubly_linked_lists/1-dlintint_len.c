#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * dlistint_len - Prints elements in a double list
 * @h: A pointer to the dlistint
 *
 * Return: The number of nodes
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t node;

	for (node = 0; h != NULL; node++)
	{
		h = h->next;
	}

	return (node);
}
