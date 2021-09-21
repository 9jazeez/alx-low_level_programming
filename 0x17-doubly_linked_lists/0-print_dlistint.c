#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_dlistint - Prints elements in a double list
 * @h: A pointer to the dlistint
 *
 * Return: The number of nodes
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t node;

	if (h == NULL)
	{
		return (-1);
	}

	for (node = 0; h != NULL; node++)
	{
		printf("%d\n", h->n);
		h = h->next;
	}

	return (node);
}
